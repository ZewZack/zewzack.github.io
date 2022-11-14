// Hüseyin Enes Ataş - 1030110009
// Ödev 1
#include <stdio.h>
void fonksiyon1();
void fonksiyon2();
int i1, i2 = 50;    // i1 = null(0) ve i2 = 50 tanımlandı.

int main()
{
    printf("i1 = %d\n", i1);    // i1 globaldeki aldığı null(0) yazdırır.
    printf("i2 = %d\n", i2);    // i2 globaldeki aldığı 50 yazdırır.

    fonksiyon1();               // fonksiyon1 çalışır.
    fonksiyon2();               // fonksiyon2 çalışır.
    return 0;
}
void fonksiyon1()
{
    printf("i1 = %d\n", i1);    // fonksiyon değer olarak tekrar globaldeki null(0) yazdırır.
    printf("12 = %d\n", i2);    // fonksiyon değer olarak tekrar globaldeki 50 yazdırır.
}
void fonksiyon2()
{
    int i1 = 20;                // fonksiyon2 içinde i1 = 20 tanımlanır.
    printf("i1 = %d\n" , i1);   // i1 fonksiyon2 içinde aldığı 20 yazdırır.
}