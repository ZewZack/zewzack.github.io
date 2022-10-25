// 9. Ödev
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Turkish");
    
    int dizi[10];
    int giris;
    int hangisayi;

    programbasi:;
    printf("Birbirinden farklý 10 adet pozitif tamsayý giriniz.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d. sayýyý giriniz: ", i+1);
        scanf("%d", &giris);
        if (giris < 1)
        {
            printf("Lütfen pozitif tam sayý giriniz.\n");
            goto programbasi;
        }

        dizi[i] = giris;
    }

    programdevami:;
    printf("Girdiðiniz hangi sayýnýn dizide kaçýncý sýrada olduðunu öðrenmek istiyorsunuz?: ");
    scanf("%d", &hangisayi);

    for (int i = 0; i < 10; i++)
    {
        if (dizi[i] == hangisayi)
        {
            printf("%d sayýsý dizinin %d. sýrasýnda bulunmakta.", hangisayi, i);
        }
    }  
}