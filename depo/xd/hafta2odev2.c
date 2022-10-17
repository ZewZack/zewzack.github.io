// Sınavlar ortalamasını hesaplayan C programı:
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

    int dersVeNotlar[7][4]={};
    float ort, ortDizisi[7]={};
    
    for (int i = 0; i < 7; i++)
    {
        int toplamNot = 0;
        
        printf("%d. dersin notlarını giriniz:\n", i+1);

        for (int j = 0; j < 4; j++)
        {
            printf("%d. notu giriniz: ", j+1);
            scanf("%d", &dersVeNotlar[i][j]); 

            toplamNot = toplamNot + dersVeNotlar[i][j];
        }

        ort = toplamNot / 4;
        ortDizisi[i] = ort;
    }

    printf("\n");

    for (int k = 0; k < 7; k++)
    {
        if (ortDizisi[k] >= 45)
        {
            printf("%d. dersi %.0f ortalama ile geçtiniz.\n", k+1, ortDizisi[k]);
        }

        else
        {
            printf("%d. dersten %.0f ortalama ile kaldınız.\n", k+1, ortDizisi[k]);
        }
    }
}