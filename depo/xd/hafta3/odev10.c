// 10. �dev
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int asalmi(int sayi)
{
    int kontrol = 1;

    for (int i = 2; i < sayi/2; i++)
    {
        if (sayi % i == 0)
        {
            kontrol = 0;
            break;
        }
    }
    return kontrol;
}

int main()
{
    setlocale (LC_ALL, "Turkish");
    
    int dizi[10];
    int giris;
    int asalkontrol;
    
    programbasi:;
    printf("Birbirinden farkl� 10 adet pozitif tamsay� giriniz.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d. say�y� giriniz: ", i+1);
        scanf("%d", &giris);
        if (giris < 1)
        {
            printf("L�tfen pozitif tam say� giriniz.\n");
            goto programbasi;
        }
        else
        {
            asalkontrol = asalmi(giris);
            if (asalkontrol != 0)
            {
                dizi[i] = giris;
            }
            else
            {
                dizi[i] = 0;
            }
        }
    }

    printf("Asal olan say�lar: \n");

    for (int i = 0; i < 10; i++)
    {
        if (dizi[i] != 0 && dizi[i] != 1)
        {
            printf("%d ", dizi[i]);
        }
    }
}