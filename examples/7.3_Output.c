// Fig. 9.7: fig09_05c
// Using the character and string conversion specifiers
#include <stdio.h>

int main(void)
{
    int x = 12345; // initialize int x
		int *ptr = &x; // assign address of x to ptr

		printf("The value of ptr is %p\n", ptr);
		printf("The address of x is %p\n\n", &x);

		printf("Printing a %% in a format control string\n");
}
/*
// Fig. 9.7: fig09_05c
// Karakter ve dizi dönüş belirleyicilerinin kullanımı
#include <stdio.h>

int main(void)
{
    int x = 12345; // x değişkenine değer atanır
    int *ptr = &x; // ptr işaretçisine x'in adresi atanır

    printf("ptr değişkeninin değeri: %p\n", ptr); // ptr işaretçisinin değeri yazdırılır
    printf("x değişkeninin adresi: %p\n\n", &x); // x değişkeninin adresi yazdırılır

    printf("%% işareti bir format kontrol dizisinde yazdırılır.\n"); // %% ifadesi yazdırılır
}
*/