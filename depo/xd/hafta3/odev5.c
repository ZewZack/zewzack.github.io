// 5. Ödev
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(void)
{
    setlocale(LC_ALL,"Turkish");
    int dizi[21];
    int sayi = 1;
    
    for (int i = 1; i < 21; i++)
    {
        dizi[i] = sayi;
        sayi++;
    }

    int kuvvet = 0;
    int sonuc = 0;

    printf("\nkaçýncý dereceden kuvveti alýnsýn? : ");
    scanf("%d", &kuvvet);

    for (int j = 1; j < 21; j++)
    {
        sonuc = pow(dizi[j], kuvvet);
        printf("%d\n", sonuc);    
    }
}