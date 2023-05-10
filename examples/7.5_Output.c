// Fig. 9.19: fig09_19.c
// Reading input with floating-point conversion specifiers
#include <stdio.h>

// function main begins program execution
int main(void)
{
    double a; // değişken a tipi çift hassasiyetli kayan noktalı sayı
    double b; // değişken b tipi çift hassasiyetli kayan noktalı sayı
    double c; // değişken c tipi çift hassasiyetli kayan noktalı sayı

   puts("Enter three floating-point numbers:"); // "Enter three floating-point numbers:" ifadesi ekrana yazdırılır.
	 scanf("%le%lf%lg", &a, &b, &c); // scanf fonksiyonu ile üç adet çift hassasiyetli kayan noktalı sayı okunur ve değişkenlere atanır.

	 printf("\nHere are the numbers entered in plain:"); // "\nHere are the numbers entered in plain:" ifadesi ekrana yazdırılır.
	 puts("floating-point notation: \n"); // "floating-point notation: \n" ifadesi ekrana yazdırılır.
	 printf("%f\n%f\n%f\n", a, b, c); // printf fonksiyonu ile okunan üç adet çift hassasiyetli kayan noktalı sayı ondalık gösterimle ekrana yazdırılır.
} // end main


