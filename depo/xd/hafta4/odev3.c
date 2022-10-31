// Ödev 3
#include <stdio.h>

int faktoriyel(int girilensayi)
{
    int sonuc = 1;
    for (int i = 1; i < girilensayi+1; i++)
    {
        sonuc = sonuc * i;
    }
    return sonuc;
}

int main(void)
{
    int sayi;
    printf("\nFaktoriyeli alinacak sayiyi giriniz: ");
    scanf("%d", &sayi);
    printf("Sonuc: %d", faktoriyel(sayi));
    return 0;
}