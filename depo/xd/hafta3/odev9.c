// 9. �dev
#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Turkish");
    
    int dizi[10];
    int giris;
    int hangisayi;

    programbasi:;
    printf("Birbirinden farkl� 10 adet pozitif tamsay� giriniz.\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d. say�y� giriniz: ", i+1);
        scanf("%d", &giris);
        if (giris < 1)
        {
            printf("L�tfen pozitif tam say� giriniz.\n");
            goto programbasi;
        }

        dizi[i] = giris;
    }

    programdevami:;
    printf("Girdi�iniz hangi say�n�n dizide ka��nc� s�rada oldu�unu ��renmek istiyorsunuz?: ");
    scanf("%d", &hangisayi);

    for (int i = 0; i < 10; i++)
    {
        if (dizi[i] == hangisayi)
        {
            printf("%d say�s� dizinin %d. s�ras�nda bulunmakta.", hangisayi, i);
        }
    }  
}