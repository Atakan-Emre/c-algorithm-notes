#include <stdio.h> 

void printArray(int a[][3]); // çok boyutlu diziyi yazdıran fonksiyon prototipi

int main(void) // programın giriş noktası
{
    // 2 satır, 3 sütunluk, ilk satırın elemanları 1, 2, 3; ikinci satırın elemanları 4, 5, 6 olan dizi
    int array1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    puts("Values in array1 by row are:");
    printArray(array1); // array1 dizisini yazdır
    
    // 2 satır, 3 sütunluk, ilk satırın elemanları 1, 2, 3; ikinci satırın elemanları 4, 5, 0 olan dizi
    int array2[2][3] = {1, 2, 3, 4, 5};
    puts("Values in array2 by row are:");
    printArray(array2); // array2 dizisini yazdır
    
    int array3[2][3] = {{1,2},{4}}; // 2 satır, 3 sütunluk, tüm elemanları 0 olan dizi
    puts("Values in array3 by row are:");
    printArray(array3); // array3 dizisini yazdır

}

// 2 satır, 3 sütunlu bir diziyi ekrana yazdıran fonksiyon
void printArray(int a[][3]) 
{
    // satırların sayısı kadar döngü
    for (size_t i = 0; i <= 1; ++i) {
        // sütunların sayısı kadar döngü
        for (size_t j = 0; j <= 2; ++j) {
            printf("%d ", a[i][j]); // dizinin (i,j) elemanını yazdır
        }
        printf("\n"); // bir sonraki satıra geç
    }
}
