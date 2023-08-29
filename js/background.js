import * as $ from "https://cdn.jsdelivr.net/npm/three@0.124.0/build/three.module.js";
// import { OrbitControls } from "//cdn.jsdelivr.net/npm/three@0.124.0/examples/jsm/controls/OrbitControls.js"; // gerek yok la
import { EffectComposer } from "//cdn.jsdelivr.net/npm/three@0.124.0/examples/jsm/postprocessing/EffectComposer.js";
import { RenderPass } from "//cdn.jsdelivr.net/npm/three@0.124.0/examples/jsm/postprocessing/RenderPass.js";
import { UnrealBloomPass } from "//cdn.jsdelivr.net/npm/three@0.124.0/examples/jsm/postprocessing/UnrealBloomPass.js";
import { Curves } from "//cdn.jsdelivr.net/npm/three@0.124.0/examples/jsm/curves/CurveExtras.js";

// ---- boot
const renderer = new $.WebGLRenderer({});
const scene = new $.Scene();
const camera = new $.PerspectiveCamera(75, 2, 0.01, 5000);
window.addEventListener("resize", () => {
  const { clientWidth, clientHeight } = renderer.domElement;
  renderer.setSize(clientWidth, clientHeight, false);
  renderer.setPixelRatio(window.devicePixelRatio);
  camera.aspect = clientWidth / clientHeight;
  camera.updateProjectionMatrix();
});
document.body.prepend(renderer.domElement);
window.dispatchEvent(new Event("resize"));

// ---- setup
scene.fog = new $.FogExp2("red", 0.05);
scene.add(new $.HemisphereLight("black", "black", 2));

// ---- const
const mpms = 20 / 1e3;
const steps = 2000;

// ---- mesh
const shape = new $.Shape();
// cw
shape.moveTo(-5, -1);
shape.quadraticCurveTo(0, -4, 5, -1);
shape.lineTo(6, -1);
shape.quadraticCurveTo(0, -5, -6, -1);
const extrudePath = new Curves.TorusKnot();
const UVGenerator = (() => {
  let i = 0; // face id
  return {
    generateTopUV(...xs) {
      // for 2 "cap" faces
      return [new $.Vector2(), new $.Vector2(), new $.Vector2()];
    },
    generateSideWallUV(_geom, _vs, _a, _b, _c, _d) {
      // all side faces
      const segments = 5; // (shape-related; NOT eq `curveSegments`)
      if (i < segments * steps) {
        // ignore bottom road faces
        ++i;
        return [
          new $.Vector2(),
          new $.Vector2(),
          new $.Vector2(),
          new $.Vector2(),
        ];
      }
      const n = i - segments * steps; // offseted face idx
      const total_col_segments = 7; // (shape-related)
      const col = (n / steps) | 0;
      const left = col / total_col_segments; // normalize
      const right = (col + 1) / total_col_segments; // normalize
      const row = n % steps;
      const bottom = row / steps; // normalize
      const top = (row + 1) / steps; // normalize
      ++i;
      return [
        new $.Vector2(left, bottom), // bottom left
        new $.Vector2(right, bottom), // bottom right
        new $.Vector2(right, top), // top right
        new $.Vector2(left, top), // top left
      ];
    },
  };
})();
const extrudeGeom = new $.ExtrudeBufferGeometry(shape, {
  bevelEnabled: false,
  steps,
  extrudePath,
  curveSegments: 5,
  UVGenerator,
});

const matSideWall = f();
const matTop = new $.MeshLambertMaterial({ color: "black" });
const mesh = new $.Mesh(extrudeGeom, [matTop, matSideWall]);
scene.add(mesh);

// ---- composer

const composer = new EffectComposer(renderer);
composer.addPass(new RenderPass(scene, camera));
composer.addPass(new UnrealBloomPass(new $.Vector2(), 2, 0.5, 0.7));

// ---- anim

const totalLen = extrudePath.getLength();
const { binormals } = extrudePath.computeFrenetFrames(steps);
const $m = new $.Matrix4(); // rotation matrix

renderer.setAnimationLoop((t /*ms*/) => {
  const $u = ((mpms * t) % totalLen) / totalLen;
  // update cam position
  extrudePath.getPointAt($u, camera.position);
  // update cam rotation
  camera.setRotationFromMatrix(
    $m.lookAt(
      /* eye */ camera.position,
      /* target */ extrudePath.getPointAt(Math.min(1.0, $u + 0.01)),
      /* up */ binormals[($u * steps) | 0]
    )
  );

  renderer.getDrawingBufferSize(composer.passes[1].resolution);
  composer.render();
  mesh.material[1].uniforms.t.value = t;
});

// ---- sidewall material

function f() {
  const url =
    "https://images.unsplash.com/photo-1550747528-cdb45925b3f7?ixid=MXwxMjA3fDB8MHxzZWFyY2h8Mnx8dW5pY29ybnxlbnwwfHwwfA%3D%3D&ixlib=rb-1.2.1&auto=format&fit=crop&w=600&q=60";
  const tex = new $.TextureLoader().load(url);
  tex.wrapS = $.MirroredRepeatWrapping;
  tex.wrapT = $.RepeatWrapping;

  const shader = $.ShaderLib.lambert;
  const uniforms = $.UniformsUtils.merge([
    shader.uniforms,
    {
      t: { value: 0 },
      stretch: { value: new $.Vector2(1, 10) },
      div: { value: new $.Vector2(32, 8) },
    },
  ]);

  const vertexShader =
    `
              uniform sampler2D map;
              uniform vec2 stretch;
              ` +
    shader.vertexShader.replace(
      "#include <uv_vertex>",
      `
              #ifdef USE_UV
                  vUv = ( uvTransform * vec3( uv, 1 ) ).xy * stretch;
              #endif
              `
    );
  const fragmentShader =
    `
              uniform vec2 div;
              uniform vec2 stretch;
              uniform float t;
              ` +
    shader.fragmentShader.replace(
      "#include <map_fragment>",
      `
              #ifdef USE_MAP
                  {
                      vec2 i = vec2(ivec2( vUv * div ));
                      vec4 tA = texture2D( map, ( i ) / div );
                      vec4 tB = texture2D( map, ( i + 1.0 ) / div );
                      vec4 texel = 0.5 * (mix( tA, tB, vUv.x ) + mix( tA, tB, vUv.y ));
                      texel.b = step( 0.5, texel.b ) + ( sin( t * 0.001 ) * 0.5 + 0.5 );
                      texel.r *= 2.0;
                      texel.g *= 0.5;
                      vec2 uv = fract( vUv * stretch * div );
                      texel *= step( 0.2, uv.x ) * step ( 0.2, uv.y );
                      diffuseColor *= texel;
                  }
              #endif
              `
    );
  const mat = new $.ShaderMaterial({
    uniforms,
    vertexShader,
    fragmentShader,
    lights: true,
    fog: true,
  });

  mat.map = mat.uniforms.map.value = tex;

  return mat;
}
