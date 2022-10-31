// Ödev 1
#include <stdio.h>

int toplamaislemi(long int i, long int j)
{
    long int toplamasonucu;
    toplamasonucu = i + j;
    return toplamasonucu;
}

int main(void)
{
    long int sayi1, sayi2, sonuc;
    printf("\nToplama islemi icin birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("Toplama islemi icin ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    sonuc = toplamaislemi(sayi1, sayi2);
    printf("Sonuc: %d", sonuc);
    return 0;
}