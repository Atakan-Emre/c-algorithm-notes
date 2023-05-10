// Fig. 9.4: fig09_04.c
// Kayan noktalı sayı dönüşüm özelliklerini kullanma
#include <stdio.h>

int main(void)
{
    printf("%e\n", 1234567.89);  // kayan noktalı sayıyı bilimsel gösterimde yazdır
    printf("%e\n", +1234567.89); // artı işareti yazdırmaz
    printf("%e\n", -1234567.89); // eksi işareti yazdırır
    printf("%E\n", 1234567.89);  // büyük harfli E kullanarak bilimsel gösterimde yazdır
    printf("%f\n", 1234567.89);  // noktadan sonra altı basamak yazdır
    printf("%g\n", 1234567.89);  // kayan noktalı sayıyı en kısa şekilde yazdır, küçük harfli e kullan
    printf("%G\n", 1234567.89);  // kayan noktalı sayıyı en kısa şekilde yazdır, büyük harfli E kullan
}