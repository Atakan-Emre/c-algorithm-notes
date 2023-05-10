// Fig. 9.21: fig09_21.c
// Using a scan set
#include <stdio.h>

// main fonksiyonu programın yürütülmesine başlar
int main (void)
{
    char z[9]; // z dizisi tanımlanır
    printf("%s", "Enter string: ");
    scanf("%8[aeiou]", z); // karakter setini ara
    printf("The input was \"%s\"\n", z);
}