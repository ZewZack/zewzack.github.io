// Ödev 13
#include <stdio.h>

int ikiliden_onaltiliga(int girilensayi)
{
    int a = 1;
    int decimal = 0;
    int kalan;
    int temp = girilensayi;
    while (temp > 0)
    {
        kalan = temp % 10;
        decimal = decimal + kalan * a;
        temp /= 10;
        a *= 2;
    } 
    return decimal;
}

int main() 
{
    int sayi;

    printf("\nIkili sayi sistemine uygun sayi giriniz: ");
    scanf("%d", & sayi);

    printf("Girdiginiz ikili sayi: %d olmak uzere decimal karsiligi: %d olur.\n", sayi, ikiliden_onaltiliga(sayi));
}
