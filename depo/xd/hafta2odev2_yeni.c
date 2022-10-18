// Sýnavlar ortalamasýný hesaplayan C programý:
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    char dersler[5] = {'A', 'B', 'C', 'D', 'E'};
    int vizedizi[5];
    int finaldizi[5];
    int ortalamadizi[5];

    for (int i = 0; i < 5; i++)
    {
        printf("\n%c Dersin vize notunu giriniz: ", dersler[i]);
        scanf("%d", &vizedizi[i]);
        
        printf("\n%c Dersin final notunu giriniz: ", dersler[i]);
        scanf("%d", &finaldizi[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        int vize = 0;
        int final = 0;
        int ort = 0;

        vize = vizedizi[i];
        final = finaldizi[i];        

        vize = (vize * 40) / 100;

        final = (final * 60) / 100;

        ort = (vize + final);

        ortalamadizi[i] = ort;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("\n%c Dersin ortalamasý: %d", dersler[i], ortalamadizi[i]);
    }
}