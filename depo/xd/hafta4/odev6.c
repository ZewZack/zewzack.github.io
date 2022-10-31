// Ödev 6
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool degerkontrol;

int kontrolfonksiyonu(int deger)
{
    if (deger >= 0)
    {
        printf("\nGirdiginiz sayi negatif deger degil. ");
        degerkontrol = false;
    }
    else if (deger < 0)
    {
        printf("\nGirdiginiz sayi negatif deger. Program sonlaniyor.");
        exit(EXIT_SUCCESS);
    }
}
int main(void)
{
    int sayi;
    printf("\nKlavyeden negatif bir deger girilinceye kadar deger saymaya devam eden program:\n\n");
    programbasi:
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);
    printf("Girdiginiz sayi: %d", sayi);

    kontrolfonksiyonu(sayi);

    if (degerkontrol == false)
    {
        goto programbasi;
    }
}