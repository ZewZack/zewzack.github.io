#include <stdio.h>
#include <string.h>

int main(void)
{
    // char *pointer;
    // pointer = "merhaba";
    // printf("\n%s", pointer);
    // char str[11]; // /0 ı da düşününce 10 karaktere kadar veri depolanabilir.

    //

    // char sehir[7] = {'a', 'n', 'k', 'a', 'r', 'a', '\0'}; // 7 indiste veri olur. (6 değer + "\0" son değer) = 7 indis verisi.
    // printf("\n\n%s", sehir);
    // printf("\n");
    // for (int i = 0; i < 7; i++)
    // {
    //     printf("%c", sehir[i]);
    // }

    //

    // gets - puts
    // char ililce[] = "istanbul kadikoy";
    // printf("\n%s", ililce);
    // printf("\n%.10s", ililce);
    // printf("\n%10.5s", ililce);
    // printf("\n%-10.5s", ililce);
    
    // printf("\n\n");

    // char ililce2[] = "kayseri talas";
    // puts(ililce2);

    // char ililce3[20];
    // printf("\nil ilce giriniz: ");
    // gets(ililce3);
    // printf("%s", ililce3);

    //

    // char sehirler[][9] = {"Istanbul", "Ankara", "Kayseri", "Denizli", "Trabzon", "Van", "Kars", "Izmir"};
    // for (int i = 0; i < 9; i++)
    // {
    //     printf("%s ", sehirler[i]);
    //     }

    //     printf("\n");
    // }

    //

    char stringifade[1000];
    printf("\nString ifade giriniz: ");
    scanf("%s", &stringifade);

    printf("\n%s", stringifade);

}