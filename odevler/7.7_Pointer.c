// Reading characters and strings
#include <stdio.h>

int main(void)
{
    char x;
    char y[9];

    printf("Enter a string: ");
    scanf("%c%s", &x, y); // karakter ve string girişi alıyoruz

    puts("The input was:\n");
    printf("the character \"%c\" and the string \"%s\"\n", x, y);

    return 0;
}