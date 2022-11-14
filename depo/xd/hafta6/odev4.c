// Ödev 4
#include <stdio.h>
int main()
{
    int dizi[9] = {1,2,3,4,5,6,7,8,9};
    int *pointer1 = &dizi[2], *pointer2 = &dizi[5];

    printf("%d\n", *(pointer1+2));              //  5
    printf("%d\n", *(pointer2-3));              //  3
    printf("%d\n", *pointer2 - *pointer1);      //  3
    printf("%d\n", *pointer1 + *pointer2);      //  9
    printf("%d\n", *pointer1 < *pointer2);      //  1
    printf("%d\n", *pointer1<*pointer2);        //  1
    printf("%d\n", *pointer1 == *pointer2);     //  0
    printf("%d\n", *pointer1 == * pointer2);    //  0
}
