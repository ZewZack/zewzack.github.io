// Ödev 6:
#include <stdio.h>

int main() 
{   
    int a = 1;
    int *pointer1;
    pointer1 = &a;

    float b = 1.23;
    float *pointer2;
    pointer2 = &b;

    char c = 'C';
    char *pointer3;
    pointer3 = &c;

    printf("\nPointerlarin degerleri:\n");
    printf("%d\n", *pointer1);
    printf("%.2f\n", *pointer2);
    printf("%c\n", *pointer3);

    printf("\nPointerlarin adresleri:\n");
    printf("%p\n", &pointer1);
    printf("%p\n", &pointer2);
    printf("%p\n", &pointer3);

    printf("\nDegiskenlerin degerleri:\n");
    printf("%d\n", a);
    printf("%.2f\n", b);
    printf("%c\n", c);

    printf("\nDegiskenlerin adresleri:\n");
    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);
}