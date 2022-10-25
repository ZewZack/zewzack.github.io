// 3. Ödev
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Turkish");
    
    unsigned int sayi = 0;
    int tek[65535];
    int cift[65535];

    printf("\nKlavyeden pozitif bir sayý giriniz: ");
    scanf("%d", &sayi);

    printf("\nGirdiðiniz sayý: %d\n", sayi);
    
    unsigned int girilensayi = 0;
    girilensayi = sayi;
    unsigned int teksayi = 0;
    unsigned int ciftsayi = 0;

    for (int i = 0; i < sayi; i++)
    {
        if (girilensayi % 2 == 0)
        {
            ciftsayi = girilensayi;
            cift[i] = ciftsayi;
        }
        girilensayi--;
    }

    girilensayi = sayi;

    for (int i = 0; i < sayi; i++)
    {
        if (girilensayi % 2 == 1)
        {
            teksayi = girilensayi;
            tek[i] = teksayi;
        }
        girilensayi--;
    }

    printf("Yazdýrýlan sayýlar:\n");

    printf("Tek:\n");
    for (int j = 0; j < sayi; j++)
    {
        if (tek[j] != 0)
        {
            printf("%d\n", tek[j]);
        }
    }

    printf("Çift:\n");
    for (int k = 0; k < sayi; k++)
    {
        if (cift[k] != 0)
        {
            printf("%d\n", cift[k]);   
        }
    }
}