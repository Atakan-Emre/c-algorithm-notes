// Soru: pointer kullanarak dizi elemanlarn stralayan bir fonksiyon yazınız

#include <stdio.h>

// Pointer kullanarak diziyi sıralayan bir fonksiyon
void sort(int n, int* ptr) {
    int i, j, t;
    
    // Pointer kullanarak sayıları sırala
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(ptr + j) < *(ptr + i)) {
                t = *(ptr + i);
                *(ptr + i) = *(ptr + j);
                *(ptr + j) = t;
            }
        }
    }
}

int main() {
    int n = 5;
    int arr[] = {0, 23, 14, 12, 9};

    sort(n, arr);
    
    // Sıralanmış diziyi yazdır
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}