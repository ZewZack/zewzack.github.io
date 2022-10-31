// Ödev 7
#include <stdio.h>

int mukemmelsayi_kontrol(int girilensayi)
{
    int kontrol = 0;
    for (int i = 1; i < girilensayi; i++)
    {
        if ((girilensayi % i) == 0)
        {
            kontrol = kontrol + i;
        }
    }
    return kontrol;
    
}
int main(void)
{
    int sayi, temp;
    printf("\nMukemmel Sayi Bulma Programi: ");
    
    printf("\n\nLutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    temp = mukemmelsayi_kontrol(sayi);

    if (temp == sayi)
    {
        printf("%d sayisi Mukemmel Sayidir.", sayi);
    }
    else
    {
        printf("%d sayisi Mukemmel Sayi degildir.", sayi);
    }
}