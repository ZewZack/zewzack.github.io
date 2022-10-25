// 12. Ödev
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Turkish");
    srand(time(NULL));

    int giris;
    printf("\nRastgele üretilecek sayý miktarýný giriniz: ");
    scanf("%d", &giris);
    printf("Rastgele üretilecek sayý miktarý: %d\n", giris);

    int dizi[giris];
    int rastgelesayi;

    for (int i = 0; i < giris; i++)
    {
        rastgelesayi = rand() % 100;
        dizi[i] = rastgelesayi;

        if (dizi[i] % 2 == 0)
        {
            dizi[i] = 0;
        }
        printf("\nÇift olanlarý 0'a eþitlenerek oluþturulan %d. sayý: ", i+1);
        printf("\n%d", dizi[i]);
    }
}