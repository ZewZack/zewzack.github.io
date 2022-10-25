// 7. Ödev
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Turkish");
        
    int giris;
    int dizi[10];
    int enbuyuksayi = 0;

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

        if (dizi[i] > enbuyuksayi)
        {
            enbuyuksayi = dizi[i];
        }
    }
    printf("\nGirilen 10 sayý içerisindeki en büyük sayý: %d", enbuyuksayi);
}