// 11. �dev
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Turkish");
    
    int giris;
    printf("\nGirilecek say� miktar�n� giriniz: ");
    scanf("%d", &giris);
    printf("Girdi�iniz say� miktar�: %d\n", giris);

    int dizi[giris];
    int temp = 0;
    int sayac = 0;

    for (int i = 0; i < giris; i++)
    {
        int yenisayi = 0;
        printf("%d. say�y� giriniz: ", i+1);
        scanf("%d", &yenisayi);
        dizi[i] = yenisayi;
    }

    for (int i = 0; i < giris; i++)
    {
        for (int j = 0; j < giris; j++)
        {
            if (dizi[j] > dizi[j+1])
            {
                temp = dizi[j];
                dizi[j] = dizi[j+1];
                dizi[j+1] = temp;
            }
            
            else
            {
                continue;
            }
        }
    }
    
    for (int k = 0; k < giris; k++)
    {
        printf("%d. say�: %d\n", k+1, dizi[k+1]);
    }
}