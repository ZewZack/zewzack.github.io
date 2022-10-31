// Ödev 9
#include <stdio.h>

int tekmiciftmi(int girilensayi)
{
    if(girilensayi % 2 == 1)
    {
        printf("Girdiginiz sayi tek sayidir.");
    }
    else if(girilensayi % 2 == 0)
    {
        printf("Girdiginiz sayi cift sayidir.");
    }
}

int main(void)
{
    int sayi;
    printf("\nPozitif bir sayi giriniz: ");
    scanf("%d", &sayi);

    tekmiciftmi(sayi);
}