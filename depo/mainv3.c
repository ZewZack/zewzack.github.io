#include <stdio.h>

int main(void)
{
    // 
    // // switch ve case kullanımı
    // char harfNotu;
    // printf("Harf Notu Giriniz: [A] [B] [C] [D] [F]\n");
    // scanf("%c", &harfNotu);
    // switch(harfNotu) {
    //     case 'A':
    //         printf("pekiyi");
    //         break;
    //     case 'B':
    //         printf("iyi");
    //         break;
    //     case 'C':
    //         printf("orta");
    //         break;
    //     default: //???? emin değilim
    //         printf("hatali");
    //         break; //bundan emin değilim, bi break'i silip çalıştırmayı dene. 
    // }
    //
    
    // 
    // //while kullanımı:
    // int x=1; //baslangic degeri
    // while (x<=10) // bitis kontrol sarti
    // {
    //     printf("%d\n", x);
    //     x; // dongu kontrol degerini arttırma
    // }
    // 
    
    // 
    // // While Ornek 2:
    // int sayi;
    // long int sayi_faktoriyel;
    // printf("\nBir tamsayi giriniz: ");
    // scanf("%d", &sayi);
    // sayi_faktoriyel = 1;
    // while (sayi > 0)
    // {
    //     sayi_faktoriyel = sayi_faktoriyel*sayi;
    //     printf("\tAnlik hesaplanan faktoriyel = %ld,\t anlik carpim sayisi = %d\n", sayi_faktoriyel, sayi);
    //     sayi--;
    // }
    // printf("\n\tHesaplanan faktoriyel = %ld\n", sayi_faktoriyel);
    // 

    //
    // // do while konutu: do kullandığımız için kod her türlü en az 1 kez çalıştırılır. while şartına bağlı olarak "do" girilen komut tekrardan yazdırılabilir.
    // int sayi = 0;
    // do 
    // {
    //     printf("Bir sayi giriniz: ");
    //     scanf("%d", &sayi);
    //     if (sayi < 10)
    //     {
    //         printf("Girilen sayi 10'dan kucuk, dongu tekrar calisir.\n");
    //     }
    //     else
    //     {
    //         printf("Girilen sayi 10'dan kucuk degil, dongu sonlanir.\n");
    //     }
    // }
    // while(sayi < 10);
    // printf("Girilen son sayi = %d\n", sayi);
    // printf("Programi sonlandirmak icin herhangi bir giris yapin:");
    // scanf("%d");
    //

    //
    // // for döngüsü:
    // int sayi, x;
    // int carpim=1;
    // printf("Carpim islemi icin bir sayi giriniz: ");
    // scanf("%d", &sayi);
    // for (x = sayi; x > 0; x=x-3)
    // { 
    //     carpim*=x;
    //     printf("Carpim = %d,\tCarpan Sayac Degeri= %d\n", carpim, x);
    // }
    // printf("Sonuc = %d", carpim);
    //

    // 
    // for ile asal sayi bulma:
    // int sayi;
    // int x;
    // int asalmi=0;
    // int j;
    // printf("Kaca kadar asal sayilarin bulunmasini istiyorsunuz? = ");
    // scanf("%d", &sayi);
    // for (x=2; x<=sayi; x++)
    // {
    //     asalmi=0;
    //     for (j=2; j<x; j++)
    //     {
    //         if (x%j==0)
    //         {
    //             asalmi=1;
    //         }
    //     }
    //     if (asalmi==0)
    //     {
    //         printf("'%d' sayisi asal sayidir.\n", x);
    //     }
    //     else
    //     {
    //         printf("'%d' sayisi asal sayi degildir.\n", x);
    //     }
    // }
    //
    
    //
    // // break - continue - goto fonksiyonları:
    // // continue:
    // int i;
    // for (i=1; i<=10; ++i)
    // {
    //     if (i%2==0) 
    //     // i nin 2 ye modundan kalan 0 olduğunda continue aşağıdaki komutu yazdırmak yerine üstü 'devam' eder. yani 2%2 = 0 ı yazdırmaz 2%3 = 1 i yazdırır, 2%4 = 0 yazdırmaz vs gibi. continue, aşağıyı iptal eder.
    //         continue;
    //     printf("Sayi degeri = %d\n", i);
    // }
    //

    //
    // // giriş alarak yapmalı olan:
    // int i;
    // int j;
    // printf("Bir sayi girin = ", j);
    // scanf("%d", &j);
    // for (i=1; i<j; ++i)
    // {
    //     if (i%2==0)
    //         continue;
    //     printf("Sayi Degeri = %d\n", i);
    // }
    //

    return 0;
}
