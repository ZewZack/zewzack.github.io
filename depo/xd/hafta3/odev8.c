// 8. �dev
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
    printf("Diziye girilen 10 say� i�erisindeki en b�y�k ve en k���k de�erlerin toplam�: %d", toplam);
}