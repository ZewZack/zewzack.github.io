// 8. Ödev
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Turkish");
    
    int giris;
    int dizi[10];
    int toplam;
    int enbuyuk = INT_MAX;
    int enkucuk = INT_MIN;

    programbasi:;
    printf("Birbirinden farklý 10 adet pozitif tamsayý giriniz.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d. sayýyý giriniz: ", i+1);
        scanf("%d", &giris);
        if (giris < 1)
        {
            printf("Lütfen pozitif tam sayý giriniz.\n");
            goto programbasi;
        }

        dizi[i] = giris;

        if (dizi[i] < enbuyuk)
        {
            enbuyuk = dizi[i];
        }
        
        if (dizi[i] > enkucuk)
        {
            enkucuk = dizi[i];
        }
    }
    toplam = enkucuk + enbuyuk;
    printf("Diziye girilen 10 sayý içerisindeki en büyük ve en küçük deðerlerin toplamý: %d", toplam);
}