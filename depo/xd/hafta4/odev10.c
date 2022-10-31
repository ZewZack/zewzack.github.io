// Ödev 10
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int tek_sayilar(int girilensayi)
{
    for (int i = 0; i < girilensayi; i++)
    {
        if (i % 2 != 0)
        {
            printf("%d ", i);
        }
    }    
}

int main(void)
{
    int sayi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d", &sayi);

    tek_sayilar(sayi);
}