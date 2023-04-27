#include <stdio.h>
#define SIZE 10

// program çalışmasını başlatan main fonksiyonu
int main(void)
{
    // a dizisi tanımlanıp başlangıç değerleri atanıyor
    int a[SIZE] = {2, 6, 4, 8, 10, 12, 89, 68, 45, 37};

    puts("Orijinal siralama:");
    
    // dizinin orijinal hali yazdırılıyor
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    
    // bubble sort (kabarcık sıralama) algoritması
    // her geçişte karşılaştırma sayısını kontrol eden dış döngü
    for (unsigned int pass = 1; pass < SIZE; ++pass) {
        // komşu elemanları karşılaştırıp birbirleriyle yer değiştirme işlemi
        // ilk elemanın ikinci elemandan büyük olması durumunda yer değiştirme
        for (size_t i = 0; i < SIZE - 1; ++i) {
            if (a[i] > a[i + 1]) {
                int hold = a[i];
                a[i] = a[i + 1];
                a[i + 1] = hold;
            }
        }
    }
    
    puts("\n Artan sirayla veriler:");
    
    // sıralanmış dizi yazdırılıyor
    for (size_t i = 0; i < SIZE; ++i) {
        printf("%4d", a[i]);
    }
    
    puts("");
}
