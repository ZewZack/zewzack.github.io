// Ödev 8
# include <stdio.h>

int numarakontrol(int num1, int num2)
{
    int kontrol;
    if (num1 > num2)
    {
        printf("1. girdiginiz sayi (%d), 2. girdiginiz sayidan (%d) buyuktur.", num1, num2);
    }
    else if (num2 > num1)
    {
        printf("2. girdiginiz sayi (%d), 1. girdiginiz sayidan (%d) buyuktur.", num2, num1);
    }
    else if (num2 = num1)
    {
        printf("Sayilar (%d) birbirine esit.", num1);
    }
}
int main(void)
{
    int sayi1, sayi2;
    printf("Birinci sayiyi giriniz: ");
    scanf("%d", &sayi1);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d", &sayi2);

    numarakontrol(sayi1, sayi2);
}