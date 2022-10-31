#include <stdio.h>

int kuvvet_al(int sayi, int kuvvet)
{  
    int sonuc = sayi;
    for (int i = 1; i < kuvvet; i++)
    {
        sonuc = sonuc * sayi;
    }
    return sonuc;
}
int main(void)
{
    int girilensayi, girilenkuvvet;
    printf("\nKuvvetini almak istediginiz sayiyi giriniz: ", girilensayi);
    scanf("%d", &girilensayi);
    printf("Ussu giriniz: ", girilenkuvvet);
    scanf("%d", &girilenkuvvet);

    printf("Sonuc: %d", kuvvet_al(girilensayi, girilenkuvvet));
    return 0;
}