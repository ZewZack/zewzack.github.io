// 7. �dev
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Turkish");
        
    int giris;
    int dizi[10];
    int enbuyuksayi = 0;

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

        if (dizi[i] > enbuyuksayi)
        {
            enbuyuksayi = dizi[i];
        }
    }
    printf("\nGirilen 10 say� i�erisindeki en b�y�k say�: %d", enbuyuksayi);
}