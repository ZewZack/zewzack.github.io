#include <stdio.h>
int main()
{
    int rakam = 5;
    printf("1. rakam = %d\n", rakam);

    int rakam2 = 10;
    printf("1. rakam = %d ve 2. rakam = %d\n", rakam, rakam2);

    char karakter = 65;
    printf("1. karakter = %c\n", karakter);

    char karakter2 = 'a';
    printf("2. karakter = %c\n", karakter2);

    //long ornegi
    //

    printf("\n");

    // %d -> kisa tamsayi [-32k - +32k]
    // %f -> virgullu sayi 
    // %c -> karakter [-127 - +128]
    // %s -> metin
    // %u -> isaretsiz tamsayilar [0 - 65535]
    // %ld -> cok uzun tam sayilar [-2 milyar - +2 milyar]

    //.2f -> virgulden 2 sonraki sayiyi alir.
    //.3f -> virgulden 3 sonraki sayiyi alir.
    float virgullusayi = 9.12345;
    printf("Virgulden sonra 2. sayiya kadar = %.2f\n", virgullusayi);
    printf("Virgulden sonra 3. sayiya kadar = %.3f\n", virgullusayi);
    printf("Virgulden sonra 4. sayiya kadar = %.4f\n", virgullusayi);

    printf("\n");

    // \n -> enter
    // \t -> tab
    // \v -> dikey bosluk
    // \' -> tirnak isareti
    printf("Kayseri\'nin Universitesi\n");
    // \" -> cift tirnak isareti
    printf("\"Kayseri\" Universitesi\n");
    // / -> slash
    printf("Kayseri / Erciyes Universitesi\n");

     printf("\n");

    float ortalama = 3.55;
    char harf = 'A';

    printf("ortalama = %f\n", ortalama);
    printf("ortalama = %.2f\n", ortalama);
    printf("harf = %c\n", harf);

    printf("\n");

    char ogrenciadi[] = "Enes";
    long int numara = 1030110009;
    int dogumGunu = 18;

    printf("Isim = %s \togrenci No = %ld \tDogum Gunu = %d\n", ogrenciadi, numara, dogumGunu);

    printf("\n");

    //sprintf fonksiyonu kullanimi ve ornegi:

    int vizeNotu = 70;
    int finalNotu = 80;
    char ogrenci[] = "Enes";
    char ders[] = "C Programlama Dili Dersi";
    char bufferParam[200];

    sprintf(bufferParam, "%s isimli ogrencinin;\nDersi: %s\nDersin vize notu: %d\nDersin final notu: %d", ogrenci, ders, vizeNotu, finalNotu);
    printf("Olusturulan karakter dizisi:\n%s", bufferParam);

    printf("\n");

    //scanf fonksiyonu kullanimi ve ornegi:
    // & -> atama isareti olarak kullanilir &dogumYili degerine girisi atama yapar.

    printf("Dogum yilinizi giriniz:");
    int dogumYili;
    scanf("%d", &dogumYili);
    printf("Kullanici tarafindan girilen dogum yili: %d\n", dogumYili);

    printf("\n");
    
    //boy-kilo orani olcme ve alma

    char adi[100];
    char soyadi[100];
    float boy, kilo;
    printf("Adinizi giriniz:");
    scanf("%s", adi);
    printf("Soyadinizi giriniz:");
    scanf("%s", soyadi);
    printf("Boyunuzu metre cinsinden giriniz:");
    scanf("%f", &boy);
    printf("Kilonuzu giriniz:");
    scanf("%f", &kilo);

    float boyKiloOrani = boy * 100 / kilo;
    printf("Adi:%s,Soyadi:%s\nBoy:%.2f\nKilo:%.2f\nBoy(cm)/Kilo=%.2f\n", adi,soyadi,boy,kilo,boyKiloOrani);

    printf("\n");
    printf("Yeni Hafta\n");
    printf("\n");


    // Yeni Hafta


    // + -> toplama
    // - -> çıkarma
    // * -> çarpma
    // / -> bölme
    // % -> mod alma (bölümden kalan)

    int x = 10, y = 5;

    printf("x=%d , y=%d\n", x,y);
    printf("x+y = %d\n", x+y);
    printf("x-y = %d\n", x-y);
    printf("x*y = %d\n", x*y);
    printf("x/y = %d\n", x/y);
    printf("x mod y = %d\n\n", x%y);

    // X+=Y -> X = X + Y ile aynı görevde
    // X-=Y -> X = X - Y ile aynı görevde
    // X*=Y -> X = X * Y ile aynı görevde
    // X/=Y -> X = X / Y ile aynı görevde
    // X%=Y -> X = X mod Y ile aynı görevde

    printf("x+=y = %d\n", x+=y);
    printf("x-=y = %d\n", x-=y);
    printf("x*=y = %d\n", x*=y);
    printf("x/=y = %d\n", x/=y);
    printf("x mod y = %d\n\n", x%=y);
    

    //Hocanın Yazdırdığı Örnekler:


    printf("Hocanin Yazdirdigi Ornekler:\n");
    printf("\n");

    int x1 = 11;
    int y1 = 0;

    printf("Ornek 1 = operatoru, oncesi y=%d, x=%d\n", y1,x1);
    y1=x1;
    printf("y = x;\n");
    printf("sonrasi y = %d\n\n",y1);

    printf("Ornek 2 += operatoru, oncesi y=%d, x=%d\n", y1,x1);
    y1+=x1;
    printf("y += x;\n");
    printf("sonrasi y = %d\n\n", y1);

    printf("Ornek 3 -= operatoru, oncesi y=%d, x=%d\n", y1,x1);
    y1-=x1;
    printf("y -= x;\n");
    printf("sonrasi y = %d\n\n", y1);

    printf("Ornek 4 *= operatoru, oncesi y=%d, x=%d\n", y1,x1);
    y1*=x1;
    printf("y *= x;\n");
    printf("sonrasi y = %d\n\n", y1);

    printf("Ornek 5 /= operatoru, oncesi y=%d, x=%d\n", y1,x1);
    y1/=x1;
    printf("y /= x;\n");
    printf("sonrasi y = %d\n\n", y1);

    y1 = 200;
    printf("Ornek 6 \%= operatoru, oncesi y=%d, x=%d\n", y1,x1);
    y1%=x1;
    printf("y \%= x;\n");
    printf("sonrasi y = %d\n\n", y1);


    //Virgüllü Sayılarda Kullanım:


    printf("Virgullu sayilarda kullanim:\n");

    int x2 = 14;
    int y2 = 5;
    float z = 5.0;
    float t = 2.5;

    printf("x=%d, y=%d, z=%.2f, t=%.2f\n", x2,y2,z,t);
    printf("x/y=%d\n",x2/y2);
    printf("x/y=%f\n",x2/y2); //iki sayı integer olduğu için (int) yani float almadığı için, kod patlar ve 0.0000 verir.
    printf("z/t=%.2f\n", z/t);
    printf("x/z=%.2f\n\n", x2/z); //iki integer yerine bir float bir integer ile işlem yapıldığında float patlamadan çalışır.

    printf("x++ Gosterimi:\n");
    int x3 = 0;
    x;
    printf("x = %d\n", x);
    x++;
    printf("x = %d\n\n", x);
    // Bu islem (x++) sonucunda x, bir değer artmıştır.


    // Mantıksal İfadeler:

    
    // ve -> çarpım
    // veya -> toplama
    // gibi düşünürsek;

    // == -> EŞİT
    // && -> VE
    // > -> BÜYÜKTÜR
    // < -> KÜÇÜKTÜR
    // ! -> DEĞİL
    // != -> EŞİT DEĞİLDİR

    printf("Mantiksal Ifadeler:\n");
    int x4 = 5, y4 = 5, z3 = 10, sonuc; // x = 5, y = 5, z = 10 ve sonuç tanımlandı.
    


    // Detaylı Tanımlama Yapılacak


        //detaylı tanımlama boşluğu


    // Detaylı Tanımlama Yapılacak


    // Hocanın yazdırdığı örnekler:
    printf("Hocanin yazdirdigi ornekler:\n\n");

    printf("x=%d, y=%d, z=%d\n", x4,y4,z3); // x y z yazdırıldı.

    sonuc = (x4 == y4) && (z3 > y4);    // sonuc = (x EŞİT y)
    printf("(x==y) && (z>y) ifadesinin degeri: %d\n", sonuc); 

    sonuc = (x4 == y4) && (z3 < y4);
    printf("(x == y) && (z < y) ifadesinin degeri: %d\n", sonuc);

    sonuc = (x4 == y4) || (z3 < y4);
    printf("(x == y) || (z < y) ifadesinin degeri: %d\n", sonuc);

    sonuc = (x4 != y4) || (z3 < y4);
    printf("(x != y) || (z < y) ifadesinin degeri: %d\n", sonuc);

    sonuc = !(x4 != y4);
    printf("!(x == y) ifadesinin degeri: %d\n", sonuc);

    sonuc = !(x4 == y4);
    printf("!(x == y) ifadesinin degeri: %d\n\n", sonuc);

    //

    int x5 = 2, y5 = 2, z5 = 3;
    printf("%d == %d karsilastirma sonucu: %d\n", x5,y5,x5 == y5); //true
    printf("%d == %d karsilastirma sonucu: %d\n", x5,z5,x5 == z5); //false

    printf("%d > %d karsilastirma sonucu: %d\n", x5,y5,x5 > y5); //false
    printf("%d > %d karsilastirma sonucu: %d\n", x5,z5,x5 > z5); //false

    printf("%d < %d karsilastirma sonucu: %d\n", x5,y5,x5 < y5); //false
    printf("%d < %d karsilastirma sonucu: %d\n", x5,z5,x5 < z5); //true

    printf("%d != %d karsilastirma sonucu: %d\n", x5,y5,x5 != y5); //false
    printf("%d != %d karsilastirma sonucu: %d\n", x5,z5,x5 != z5); //true

    printf("%d >= %d karsilastirma sonucu: %d\n", x5,y5,x5 >= y5); //true
    printf("%d >= %d karsilastirma sonucu: %d\n", x5,z5,x5 >= z5); //true

    printf("%d <= %d karsilastirma sonucu: %d\n", x5,y5,x5 <= y5); //true
    printf("%d <= %d karsilastirma sonucu: %d\n", x5,z5,x5 <= z5); //true

    printf("\n");
    // IF ve ELSE ifadesi:

    // if = eğer
    // else = diğer
    // elseif =  diğerin diğeri
    //                          demektir. blok şeklinde açılabilir:

    // Örnek:

    // if (ifade1)
    // {
    //     Komut;
    // }
    // else if(ifade2)
    // {
    //     Komut;
    // }
    // else if(ifade3)
    // {
    //     Komut;
    // }
    // else(son ifade)
    // {
    //     Komut;
    // }
    printf("\n");

    printf("Indirimli Alisveris Hesaplama:\n");
    printf("\n");

    alisveris:;
    float girilen_tutar;
    float net_tutar;
    printf("Toplam Alisveris Tutarini Giriniz:");
    scanf("%f", &girilen_tutar);
    if(girilen_tutar <= 50)
    {
        net_tutar = girilen_tutar * 90 / 100;
    }
    else if(50 <= girilen_tutar && girilen_tutar < 100)
    {
        net_tutar = girilen_tutar * 80 / 100;
    }
    else if(girilen_tutar >= 100)
    {
        net_tutar = girilen_tutar * 70 / 100;
    }    
    printf("Odeyeceginiz Net Tutar:%.2f\n",net_tutar);

    return 0;
}
