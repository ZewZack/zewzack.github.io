// Yýllýk ortalama sýcaklýklarýn en düþük ve en yüksek olan illerini veren C programý:

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <locale.h>

void yillikOrtSicaklikHesapla(float matris[][12], int sehir_sayisi, char *sehir_isimleri[])
{
    int es_il, esi_il;
    float es_ort, esi_ort;
    bool kontrol = false;
    
    for(int i = 0; i < sehir_sayisi; i++)
    {
        float satir_toplami = 0.0;

        for(int j = 0; j < 12; j++)
        {
            satir_toplami = satir_toplami + matris[i][j];
        }

        satir_toplami = satir_toplami/12;

        if (kontrol == false)
        {
            es_il = i;
            esi_il = i;
            es_ort = satir_toplami;
            es_ort = satir_toplami;
            kontrol = true;
        }

        else if (satir_toplami < es_ort)
        {
            es_il = i;
            es_ort = satir_toplami;
        }
        else if (satir_toplami > esi_ort)
        {
            esi_il = i;
            esi_ort = satir_toplami;
        }

        printf("%s Þehrinin ortalama yýllýk sýcaklýklarý: %.1f olarak hesaplanmýþtýr.\n",sehir_isimleri[i], satir_toplami);
        
        
    }
        printf("En soðuk il: %s þehri %.1f derece olarak bulunmuþtur.\n", sehir_isimleri[es_il], es_ort);
        printf("En sýcak il: %s þehri %.1f derece olarak bulunmuþtur.\n", sehir_isimleri[esi_il], esi_ort);
}

int main()
{
    setlocale(LC_ALL,"Turkish");
    char *il_isimleri[10] = 
    {"Kayseri", "Nevþehir", "Yozgat", "Ankara", "Ýstanbul", "Kahramanmaraþ", "Gaziantep", "Bursa", "Trabzon", "Hâkkari"};
    int sehir_sayisi = (sizeof(il_isimleri)/sizeof(il_isimleri[0]));
    float hava_sicakliklari[10][12] = 
    {{-1.0, 0.5, 5.6, 10.7, 15.1, 19.3, 22.7, 22.6, 18.0, 12.4, 5.4, 0.8},
    {0.0, 1.3, 5.5, 10.4, 15.0, 18.9, 22.2, 22.1, 18.1, 12.8, 6.3, 2.0},
    {-1.3,-0.1, 3.7, 8.8, 13.4, 17.2, 20.3, 20.6, 16.6, 11.5, 5.0, 0.7},
    {0.9, 2.7, 6.7, 11.5, 16.5, 20.6, 24.2, 24.3, 19.6, 13.9, 7.3, 2.8},
    {0.2, 1.7, 5.7, 11.2, 16.0, 20.0, 23.4, 23.4, 18.9, 13.2, 7.2, 2.5},
    {5.2, 6.7, 11.0, 15.6, 20.6, 25.7, 28.9, 29.2, 25.6, 19.6, 11.8, 6.9},
    {3.9, 5.1, 9.3, 14.0, 19.3, 24.8, 28.7, 28.7, 24.2, 17.7, 10.2, 5.6},
    {5.4, 6.5, 9.0, 13.0, 18.1, 22.6, 25.1, 25.2, 20.8, 15.9, 10.7, 7.0},
    {7.7, 7.6, 9.2, 12.2, 16.4, 20.9, 23.8, 24.4, 21.1, 17.2, 12.7, 9.5},
    {-4.1,-2.6, 2.7, 8.6, 14.4, 20.5, 25.0, 25.2, 20.7, 13.6, 5.5, -1.2}};

    yillikOrtSicaklikHesapla(hava_sicakliklari, sehir_sayisi, il_isimleri);
}