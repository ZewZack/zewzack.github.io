#include <stdio.h>
int main()
{
    int rakam = 5;
    printf("1. rakam = %d\n", rakam);

    int rakam2 = 10;
    printf("1. rakam = %d ve 2. rakam = %d\n", rakam, rakam2);

    char karakter = 65;
    printf("1. karakter = %c\n", karakter);

    char karakter2 = 'a';
    printf("2. karakter = %c\n", karakter2);

    //long ornegi
    //

    printf("\n");

    // %d -> kisa tamsayi [-32k - +32k]
    // %f -> virgullu sayi 
    // %c -> karakter [-127 - +128]
    // %s -> metin
    // %u -> isaretsiz tamsayilar [0 - 65535]
    // %ld -> cok uzun tam sayilar [-2 milyar - +2 milyar]

    //.2f -> virgulden 2 sonraki sayiyi alir.
    //.3f -> virgulden 3 sonraki sayiyi alir.
    float virgullusayi = 9.12345;
    printf("Virgulden sonra 2. sayiya kadar = %.2f\n", virgullusayi);
    printf("Virgulden sonra 3. sayiya kadar = %.3f\n", virgullusayi);
    printf("Virgulden sonra 4. sayiya kadar = %.4f\n", virgullusayi);

    printf("\n");

    // \n -> enter
    // \t -> tab
    // \v -> dikey bosluk
    // \' -> tirnak isareti
    printf("Kayseri\'nin Universitesi\n");
    // \" -> cift tirnak isareti
    printf("\"Kayseri\" Universitesi\n");
    // / -> slash
    printf("Kayseri / Erciyes Universitesi\n");

     printf("\n");

    float ortalama = 3.55;
    char harf = 'A';

    printf("ortalama = %f\n", ortalama);
    printf("ortalama = %.2f\n", ortalama);
    printf("harf = %c\n", harf);

    printf("\n");

    char ogrenciadi[] = "Enes";
    long int numara = 1030110009;
    int dogumGunu = 18;

    printf("Isim = %s \togrenci No = %ld \tDogum Gunu = %d\n", ogrenciadi, numara, dogumGunu);

    printf("\n");

    //sprintf fonksiyonu kullanimi ve ornegi:

    int vizeNotu = 70;
    int finalNotu = 80;
    char ogrenci[] = "Enes";
    char ders[] = "C Programlama Dili Dersi";
    char bufferParam[200];

    sprintf(bufferParam, "%s isimli ogrencinin;\nDersi: %s\nDersin vize notu: %d\nDersin final notu: %d", ogrenci, ders, vizeNotu, finalNotu);
    printf("Olusturulan karakter dizisi:\n%s", bufferParam);

    printf("\n");

    //scanf fonksiyonu kullanimi ve ornegi:
    // & -> atama isareti olarak kullanilir &dogumYili degerine girisi atama yapar.

    printf("Dogum yilinizi giriniz:");
    int dogumYili;
    scanf("%d", &dogumYili);
    printf("Kullanici tarafindan girilen dogum yili: %d\n", dogumYili);

    printf("\n");
    
    //boy-kilo orani olcme ve alma

    char adi[100];
    char soyadi[100];
    float boy, kilo;
    printf("Adinizi giriniz:");
    scanf("%s", adi);
    printf("Soyadinizi giriniz:");
    scanf("%s", soyadi);
    printf("Boyunuzu metre cinsinden giriniz:");
    scanf("%f", &boy);
    printf("Kilonuzu giriniz:");
    scanf("%f", &kilo);

    float boyKiloOrani = boy * 100 / kilo;
    printf("Adi:%s,Soyadi:%s\nBoy:%.2f\nKilo:%.2f\nBoy(cm)/Kilo=%.2f", adi,soyadi,boy,kilo,boyKiloOrani);

    return 0;
}
