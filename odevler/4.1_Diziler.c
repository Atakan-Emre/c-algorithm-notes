/*
Bir 2 boyutlu matris icindeki elemanlar stralayan 3 farkl fonksiyon yazinz.
1. Her satir kendi içinde stralansin.
2. Her sutün kendi içinde stralansin.
3. Tüm matris elemanlar 0x0 dan nxn e kadar stral görünsün.
*/

#include <stdio.h> 
#define ROW 3
#define COL 3

void bubbleSort(int arr[], int n) {
    int temp;
    int i, j;
    
    printf("Siralama basladi.\n");
    
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    printf("Siralama tamamlandi.\n");
}

int main() {
    int Matrix[ROW][COL] = {
        {3, 5, 1},
        {4, 2, 9},
        {6, 8, 7}
    };
    
    int i, j, k, temp;
    
    printf("Matrix:\n");
    for (i = 0; i < ROW; ++i) { 
        for (j = 0; j < COL; ++j)
            printf(" %d", Matrix[i][j]);
        printf("\n");
    }
    
    int secim;
    printf("Lutfen 1-2-3 Seciniz:\n");
    printf("1. Satir Sirala\n");
    printf("2. Sutun Sirala\n");
    printf("3. Tum Matris Sirala\n");
    scanf("%d", &secim);
    
    if (secim == 1) {
        for (i = 0; i < ROW; ++i) {
            bubbleSort(Matrix[i], COL);
        }
    }
    else if (secim == 2) {
        int newArray[ROW];
        for (j = 0; j < COL; j++) {
            for (i = 0; i < ROW; i++) {
                newArray[i] = Matrix[i][j];
            }
            bubbleSort(newArray, ROW);
            for (i = 0; i < ROW; i++) {
                Matrix[i][j] = newArray[i];
            }
        }
    }
    else if (secim == 3) {
        int newArray[ROW * COL];
        for (i = 0; i < ROW; i++) {
            for (j = 0; j < COL; j++) {
                newArray[i * COL + j] = Matrix[i][j];
            }
        }
        bubbleSort(newArray, ROW * COL);
        for (i = 0; i < ROW; i++) {
            for (j = 0; j < COL; j++) {
                Matrix[i][j] = newArray[i * COL + j];
            }
        }
    }
    else {
        printf("Yanlis bir seçim yaptiniz!!!\n");
    }
    
    printf("Matrisin son hali:\n");
    for (i = 0; i < ROW; ++i) {
        for (j = 0; j < COL; ++j)
            printf(" %d", Matrix[i][j]);
        printf("\n");
    }
    
    return 0;
}