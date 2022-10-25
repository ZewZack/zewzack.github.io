// 4. Ödev
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void)
{
    int dizi[21];
    int karedizi[21];
    int sayi = 1;
    
    for (int i = 1; i < 21; i++)
    {
        dizi[i] = sayi;
        sayi++;
    }

    for (int j = 1; j < 21; j++)
    {
        int karesi = 0;
        karesi = dizi[j];
        karesi = karesi * karesi;
        karedizi[j] = karesi;
        printf("%d\n", karedizi[j]);
    }
}