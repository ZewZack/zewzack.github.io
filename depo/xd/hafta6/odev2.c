// Ödev 2
#include <stdio.h>

int i = 123;                            // i = 123 globalde tanımlandı.
int main()
{
    printf("%d\n", i);                  // i globalden aldığı değer = 123 yazdırdı.
    {
        int i = 456, j = 789;           // i yeniden 456 olarak tanımlandı, j ilk defa 789 olarak tanımlandı. 
        printf("%d\n%d\n", i, j);       // i yeniden tanımlanan 456 yazdırır, j ilk defa tanımlandığı değer 789 yazdırır.
        {
            int i = 246;                // i tekrar 246 olarak tanımlanır.
            printf ("%d\n%d\n", i, j);  // i tekrardan tanımlanan 246 olarak yazdırılır. j bir üst-geriden tanımlanmış olduğu değer 789 yazdırır.
        }
        printf("%d\n", i);              // i program şemasına göre içerdeki yerine üst kısımdaki tanımlandığı 456 değerini yazdırır.
    }
    printf("%d\n", i);                  // i program şemasına göre içerdeki hiçbir tanımlamaları görmez ve globaldeki 123 değerini yazdırır.
    return 0;
}
