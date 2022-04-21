#include <stdio.h>
#include <math.h>
//#include <kuvvetalma.h>

int UsHesapla(int xTaban, int xKuvvet)
    {
        int xSonuc;
        xSonuc = pow(xTaban,xKuvvet);
        return xSonuc;
    }
int main() //program main'den başlar. üstten başlamaz.
    {
        int taban, kuvvet, sonuc;
        printf("Taban giriniz: ");
        scanf("%ld", &taban);
        printf("Kuvvet giriniz: ");
        scanf("%ld", &kuvvet);
        sonuc = UsHesapla(taban,kuvvet);
        printf("\n%d uzeri %d = %d", taban, kuvvet, sonuc);

        return 0;
    }
