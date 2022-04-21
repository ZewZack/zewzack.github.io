#include <stdio.h>

unsigned long long FaktoriyelHesapla(int sayi)
{
    if(sayi==1)
    return 1;
    else
    {
        return sayi * FaktoriyelHesapla(sayi-1);
    }
}

int main()
{
    int sayi;
    unsigned long long fact;

    printf("Faktoriyelini almak istediginiz sayiyi giriniz: ");
    scanf("%d", &sayi);

    fact = FaktoriyelHesapla(sayi);
    printf("%d sayisinin faktoriyeli = %llu", sayi, fact);

    return 0;
}