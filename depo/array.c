#include <stdio.h>
int main()
{
    // //array
    // int sayi_dizisi[10] = {87,90,64,61,18,27,16,10,11,4}; //indisler 0 dan başlar 87 -> 0 / 90 -> 1 ... 4 -> 9 gibi
    // for (int i=0; i<10; i++)
    // printf("%d. sayi \t\t= %d \n", i+1, sayi_dizisi[i]);
    // const int sabit = 3;
    // printf("Dizinin %d. elemani \t= %d \n", sabit+1, sayi_dizisi[sabit]);
    // sayi_dizisi[3] = 99; // 3. elemanı 61 olan 99 ile değişti.
    // printf("Dizinin %d. elemani \t= %d \n", sabit+1, sayi_dizisi[sabit]); //ekrana 99 u verir.
    // printf("Dizinin boyutu 4 x 10\t= %d byte", sizeof(sayi_dizisi));
    // //array



    // //array örnek 2: "Dizi Toplamı"
    // int sayi_dizisi[10] = {};
    // printf("10 tane sayi giriniz:\n");
    // for (int i=0; i<10; i++)
    // {
    //     int sayi;
    //     scanf("%d",&sayi);
    //     sayi_dizisi[i]=sayi;
    //     printf("%d. sayi = %d \n", i+1, sayi_dizisi[i]);
    // }
    // int toplam = 0;
    //  for(int i=0; i<10; i++)
    //  {
    //     printf("%d. sayi = %d \n", i+1, sayi_dizisi[i]);
    //     toplam += sayi_dizisi[i];
    //  }
    // printf("Dizi Toplami = %d", toplam);
    // //array örnek 2: 



    // // array örnek 3:
    // // char'dan metin tutmak istiyorsak, sonrasında pointer '*' kullanılması gerekiyor.
    // char *haftanin_gunleri[7] = {"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
    // for (int i=0; i<7; i++)
    //     printf("%d. gun = %s\n",i+1,haftanin_gunleri[i]);
    // // array örnek 3:
    


    // array örnek 4: çok boyutlu diziler:
    // int puan_tablosu[6][5] = {{3,1,0,3,1},{0,3,3,3,3},{1,0,3,1,1},{3,0,0,0,0},{0,0,1,3,3},{1,0,1,3,0}};
    //     char *takimlar[6] = {"A", "B", "C", "D", "E", "F"};
    //     int sampiyon = 0;
    //     int toplam_puan = 0;

    //     printf("\nTakimlar ");
    //     for (int i=0; i<6; i++)
    //         printf("%s, ",takimlar[i]);
    //     printf(" olmak uzere:\n\n");

    //     for (int i=0; i<6; i++)
    //     {
    //         printf("%s takimi ", takimlar[i]);
    //         int temp = 0;
    //         for (int j=0; j<5; j++)
    //         {
    //             printf("%d ", puan_tablosu[i][j]);
    //             temp = temp + puan_tablosu[i][j];
    //         }
    //         printf("skor almistir.");
    //         if (temp > toplam_puan)
    //         {
    //             toplam_puan = temp;
    //             sampiyon = i;
    //         }
    //         printf("\n");
    //     }   
    //     printf("\n%s Takimi %d puan ile sampiyon olmustur.\n", takimlar[sampiyon], toplam_puan); 
    //     //sampiyon olan takimi takimlar icine atar ve toplam puanı yazdırır.
    // // array örnek 4: çok boyutlu diziler:



    // // array örnek 5: çok boyutlu diziler 3 boyutlu:
    // int i, j, k;
    // int ucboyutlu_dizi[5][3][3] =
    // {
    //     {
    //         {1, 2, 3},
    //         {4, 5, 6},
    //         {7, 8, 9},
    //     },
    //     {
    //         {2, 4, 6},
    //         {8, 10, 12},
    //         {14, 16, 18},
    //     },
    //     {
    //         {1, 3, 5},
    //         {7, 9, 11},
    //         {13, 15, 17},
    //     },
    //     {
    //         {3, 6, 9},
    //         {12, 15, 18},
    //         {21, 24, 27},
    //     },
    //     {
    //         {5, 10, 15},
    //         {20, 25, 30},
    //         {35, 40, 45},
    //     },
    // };
    // printf("\n");
    // printf("uc boyutlu diziler\n\n");
    // for (i=0; i<5; i++)
    // {
    //     printf("%d. dizi: ", i+1);
    //     for (j=0; j<3; j++)
    //     {
    //         for (k=0; k<3; k++)
    //             printf("%d ", ucboyutlu_dizi[i][j][k]);
    //     }
    //     printf("\n");
    // }
    // printf("\n");
    // // array örnek 5: çok boyutlu diziler 3 boyutlu:
    
    return 0;
}
