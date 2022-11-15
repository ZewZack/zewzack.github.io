#include <stdio.h>
int main()
{
    char str[100000];
    int boyut=0;
    
    printf("String ifade giriniz: ");
    // scanf("%[^\n]%*c",str);
    gets(str);

    for(int i=0; str[i]!='\0'; i++)
    {
        
        boyut++;
    }
    
    printf("\nGirilen string: ");
    for (int i = 0; i < str[i]; i++)
    {
        printf("%c", str[i]);
    }

    printf("\nStringin boyutu: %d", boyut);
}