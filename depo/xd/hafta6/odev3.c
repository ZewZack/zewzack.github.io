// Ödev 3
#include <stdio.h>

int main(void)
{
    char k = 'K', m =  'M';
    char *p1 = &k;
    char *p2 =  &m;
    char *p3;
    p3 = &m;

    printf("\nilk cikti: %c", *p3);         // p3 -> M gösterir. M yazdırır.
    p3 = p1;                                // p3 artık p1 ile aynı yani 'K' göstericisi oldu.
    printf("\nikinci cikti: %c", *p3);      // p3 -> K gösterir. K yazdırır.
    *p1 = *p2;                              // *p1 artık *p2 yi gösterir ve *p2 içindeki değeri ('M') verir.
    printf("\nucuncu cikti: %c", *p1);      // *p1 *p2 yi gösterir. yani M yazdırır.
    k = m;                                  // k artık 'M' değeri oldu.
    p2 = &k;                                // p2 -> k('M') gösterir.
    p1 =  p2;                               // p1 artık p2 ile aynı yani 'M' göstericisi oldu.
    printf("\ndorduncu cikti: %c", *p1);    // *p1 p2 içindeki char k daki değeri 'M' gösterir.
}