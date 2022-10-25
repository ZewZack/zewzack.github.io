// 1. Ödev
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Turkish");
    
    unsigned int sayi = 0;
    int sayidizisi[65535];

    printf("\nKlavyeden pozitif bir sayı giriniz: ");
    scanf("%d", &sayi);

    printf("\nGirdiğiniz sayı: %d\n", sayi);
    
    unsigned int girilensayi = 0;
    girilensayi = sayi;

    for (int i = 0; i < sayi; i++)
    {
        sayidizisi[i] = girilensayi;
        girilensayi--;
    }

    printf("Yazdırılan sayılar:\n");

    for (int j = 0; j < sayi; j++)
    {
        printf("%d\n", sayidizisi[j]);
    }
}