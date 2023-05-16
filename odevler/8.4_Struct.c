#include <stdio.h>

// Birlik (union) yapısı tanımlanır.
union number {
    int i;
    double f;
};

int main() {
    // Birlik yapısından bir nesne oluşturulur ve başlangıç değeri verilir.
    union number n = {42};

    // n.i üyesi ekrana yazdırılır.
    printf("n.i = %d\n", n.i);

    // n.f üyesine yeni bir değer atanır.
    n.f = 3.14;

    // n.f ve n.i üyeleri ekrana yazdırılır.
    printf("n.f = %f\n", n.f);
    printf("n.i = %d\n", n.i);

    // double ve int türlerinin bellek boyutları ekrana yazdırılır.
    printf("double kac byte: %d\n", sizeof(double));
    printf("int kac byte: %d\n", sizeof(int));

    // int ve double toplam bellek boyutu ekrana yazdırılır.
    printf("int + double kac byte: %d\n\n", sizeof(int) + sizeof(double));

    // Birlik nesnesinin bellek boyutu ekrana yazdırılır.
    printf("n kac byte: %d\n", sizeof(n));

    return 0;
}
