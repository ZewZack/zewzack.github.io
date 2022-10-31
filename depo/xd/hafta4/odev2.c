// Ödev 2
#include <stdio.h>

int toplamaislemi(long int i, long int j)
{
    long int toplamasonucu;
    toplamasonucu = i + j;
    return toplamasonucu;
}
int cikarmaislemi(long int i, long int j)
{
    long int cikarmasonucu;
    cikarmasonucu = i - j;
    return cikarmasonucu;
}
int carpmaislemi(long int i, long int j)
{
    long int carpmasonucu;
    carpmasonucu = i * j;
    return carpmasonucu;
}
float bolmeislemi(long int i, long int j)
{
    float bolmesonucu;
    bolmesonucu = (float) i / j;
    return bolmesonucu;
}

int main(void)
{
    long int sayi1, sayi2;
    printf("\nIslemler icin birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("Islemler icin ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    printf("\nToplama sonucu: %d", toplamaislemi(sayi1, sayi2));
    printf("\nCikarma sonucu: %d", cikarmaislemi(sayi1, sayi2));
    printf("\nCarpma sonucu: %d", carpmaislemi(sayi1, sayi2));
    printf("\nBolme sonucu: %.2f", bolmeislemi(sayi1, sayi2));
    return 0;
}