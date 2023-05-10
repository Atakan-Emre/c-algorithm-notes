// Fig. 9.18: fig09_18.c
#include <stdio.h> // Satır 1: stdio.h kütüphanesi dahil edilir.

int main(void) // Satır 2: main fonksiyonu tanımlanır ve tamsayı tipi ile geri dönüş değeri belirtilir.
{
    int a; // Satır 3: değişkenler tanımlanır.
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;

    puts("Enter seven integers: "); // Satır 4: "Enter seven integers:" ifadesi ekrana yazdırılır.
    scanf("%d%i%i%i%o%u%x", &a, &b, &c, &d, &e, &f, &g); // Satır 5: scanf fonksiyonu kullanarak yedi tamsayı girdisi okunur ve değişkenlere atanır.

    puts("The input displayed as decimal integers is:"); // Satır 6: "The input displayed as decimal integers is:" ifadesi ekrana yazdırılır.
    printf("%d %d %d %d %d %d\n", a, b, c, d, e, f, g); // Satır 7: printf fonksiyonu kullanarak okunan yedi tamsayı, ondalık sayı sistemi kullanılarak ekrana yazdırılır.

    return 0; // Satır 8: main fonksiyonu başarıyla tamamlanır ve 0 değeri ile sonlandırılır.
}