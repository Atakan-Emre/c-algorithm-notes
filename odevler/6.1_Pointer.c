#include <stdio.h>
#include <string.h>

int main()
{
    // String Tanımlama
    char nickname[20];

    // Konsolda yazdırma puts kullanarak
    puts("Bir isim girin:");

    // gets kullanarak girdi alma
    gets(nickname);
    puts(nickname);

    // strlen() -> stringin uzunluğunu döndürür
    printf("nickname stringinin uzunluğu: %d\n", strlen(nickname));

    // strlen() -> stringin uzunluğunu döndürür, ancak maksimum n uzunluğunu
    printf("nickname stringinin uzunluğu: %d\n", strlen(nickname, 5));

    // sizeof() -> Dizi boyutunu döndürür
    printf("nickname dizisinin boyutu: %d\n", sizeof(nickname));

    // strcmp(str1, str2) -> aynı mı?
    char s1[20] = "BeginnersBook";
    char s2[20] = "BeginnersBook.COM";

    if (strcmp(s1, s2) == 0)
    {
        printf("string 1 ve string 2 birbirine eşit\n");
    }
    else
    {
        printf("string 1 ve 2 farklı\n");
    }

    // strncmp(str1, str2, n) -> str1 ve str2'nin ilk n karakterini karşılaştırma
    if (strncmp(s1, s2, 8) == 0)
    {
        printf("string 1 ve string 2 birbirine eşit\n");
    }
    else
    {
        printf("string 1 ve 2 farklı\n");
    }

    // strcat(str1, str2) -> birleştirme - str1 = str1 + str2
    char s3[20] = "Hello";
    char s4[20] = "World";
    strcat(s3, s4);
    printf("Birleştirme sonucu oluşan string: %s\n", s3);

    // strncat(str1, str2, n) -> birleştirme - str1 = str1 + str2(n karakterli)
    char s5[20] = "Hello";
    char s6[20] = "World";
    strncat(s5, s6, 3);
    printf("strncat kullanarak birleştirme: %s\n", s5);

    // strcpy(str1, str2) -> str1 = str2
    char s7[30] = "string 1";
    char s8[30] = "string 123456789";
    strncpy(s7, s8, 12);
    printf("Dizinin içeriği str1: %s\n", s7);

    char str1[30] = "ABCdefg";
    char str2[30] = "ABCdefg";
    strcpy(str2, str1);
    printf("%s: küçük harfe çevrildi -> %s\n", str1, strlwr(str1));
    strcpy(str2, str1);
    printf("%s: büyük harfe çevrildi -> %s\n", str1, strupr(str1));

    return 0;
}
