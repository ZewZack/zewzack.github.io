// 12. �dev
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

int main()
{
    setlocale (LC_ALL, "Turkish");
    srand(time(NULL));

    int giris;
    printf("\nRastgele �retilecek say� miktar�n� giriniz: ");
    scanf("%d", &giris);
    printf("Rastgele �retilecek say� miktar�: %d\n", giris);

    int dizi[giris];
    int rastgelesayi;

    for (int i = 0; i < giris; i++)
    {
        rastgelesayi = rand() % 100;
        dizi[i] = rastgelesayi;

        if (dizi[i] % 2 == 0)
        {
            dizi[i] = 0;
        }
        printf("\n�ift olanlar� 0'a e�itlenerek olu�turulan %d. say�: ", i+1);
        printf("\n%d", dizi[i]);
    }
}