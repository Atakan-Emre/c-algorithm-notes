#include <stdio.h>
//Dizi Elemanlarının Ortalaması:
int main() {
    int dizi[] = {1, 2, 3, 4, 5};
    int boyut = sizeof(dizi) / sizeof(dizi[0]);
    int toplam = 0;

    for(int i = 0; i < boyut; i++) {
        toplam += dizi[i];
    }

    double ortalama = (double)toplam / boyut;
    printf("Ortalama: %.2f\n", ortalama);

    return 0;
}
