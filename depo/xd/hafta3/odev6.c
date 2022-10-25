// 6. Ödev
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Turkish");
    
    int dizi[65535];
    int sayi = 0;
    int giris = 0;
    for (int i = 0; i < 65535; i++)
    {
        printf("\nBir sayý giriniz: ");
        scanf("%d", &sayi);
        
        if (sayi > 0)
        {
            dizi[i] = sayi;
            giris++;
        }
        else if (sayi < 0)
        {
            break;
        }
    }
    for (int i = 0; i < giris ; i++)
    {
        printf("%d ", dizi[i]);
    }
}