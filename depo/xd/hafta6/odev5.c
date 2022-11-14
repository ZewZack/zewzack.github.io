// Ödev 5
#include <stdio.h>
int main()
{
    int liste[10] = {30,29,28,27,26,25,24,23,22,21};
    int *pointer1 = &liste[9];
    int *pointer2 = &liste[0];
    int deger = 0;

    while (pointer1 > pointer2)
    {
        deger = *pointer1;
        *pointer1-- = *pointer2;
        *pointer2++ = deger;
    }

    printf("%d\n", *pointer1);
    printf("%d\n", *pointer2);
    printf("%d\n", deger);
}
