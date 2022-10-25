// 2. Ödev
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL,"Turkish");
    
    unsigned int sayi = 0;
    int sayidizisi[65535];

    printf("\nKlavyeden pozitif bir sayý giriniz: ");
    scanf("%d", &sayi);

    printf("\nGirdiðiniz sayý: %d\n", sayi);
    
    unsigned int girilensayi = 0;
    girilensayi = sayi;

    for (int i = 0; i < sayi; i++)
    {
        sayidizisi[i] = girilensayi;
        girilensayi--;
    }

    printf("Yazdýrýlan sayýlar (Karesi): \n");

    for (int j = 0; j < sayi; j++)
    {
        int karesi = 0;
        karesi = sayidizisi[j];
        karesi = karesi * karesi;
        printf("%d\n", karesi);
    }
}