// Fig. 9.5: fig09_05c
// Using the character and string conversion specifiers
#include <stdio.h>

int main(void)
{
    char character = 'A'; // char türünde bir değişken tanımlanır ve 'A' harfi ile başlatılır.
    printf("%c\n", character); // karakter değişkeni ekrana yazdırılır.

    printf("%s\n", "This is a string"); // bir string ifadesi ekrana yazdırılır.

    char string[] = "This is a string"; // char türünde bir dizi oluşturulur ve string ifadesi atanır.
    printf("%s\n", string); // string dizisi ekrana yazdırılır.

    const char *stringPtr = "This is also a string"; // char türünde bir pointer tanımlanır ve string ifadesi atanır.
    printf("%s\n", stringPtr); // pointerdaki string ifadesi ekrana yazdırılır.
}