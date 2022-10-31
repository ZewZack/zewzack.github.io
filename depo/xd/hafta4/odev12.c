// Ödev 12
#include <stdio.h>

int ikilisistem(int girilensayi)
{
    int i;
    int dizi[10];
    for (i = 0; girilensayi > 0; i++)
    {
        dizi[i] = girilensayi % 2;
        girilensayi = girilensayi / 2;
    }
    for(i = i-1; i >=0; i--)
    {
        printf("%d", dizi[i]);
    }
}

int main(void)
{
    int sayi;
    printf("Ikili sayi olarak donusturulecek sayiyi giriniz: ");
    scanf("%d", &sayi);
    ikilisistem(sayi);
}