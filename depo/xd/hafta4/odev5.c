// Ödev 5
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
    for (int i = 1; i < 11; i++)
    {
        printf("%d'in faktoriyel islem ", i);
        int temp = faktoriyel(i);
        printf("sonucu %d\n", temp);
    }
    return 0;
}