/* Klavyeden satir - sütun büyüklügü belirlenen 2 boyutlu matrisin transpose matrisini ekranda gösteren bir C kodu yazinz.
Transpoze matris (vada Devrik matris):
Bir matrisin satir ve sütunlarmn yer degistirmesi
sonucu olusan matrise transpoze matris denir.
Bu isleme de matrislerde transpoze alma islemi denir.
örnek:
         0 0 0 0 0      
         1 1 1 1 1           3X5 Matris      
         2 2 2 2 2

Matris Transpose:

       0 1 2    5x3 Matris
       0 1 2
       0 1 2
       0 1 2
       0 1 2
*/

#include <stdio.h>
#define MAXrow 10
#define MAXcol 10

int main() {
    int matrix[MAXrow][MAXcol];
    int i, j, row, col;

    printf("Enter number of Rows: "); // Satır sayısını kullanıcıdan al
    scanf("%d", &row);

    printf("Enter number of Cols: "); // Sütun sayısını kullanıcıdan al
    scanf("%d", &col);

    printf("\nEnter matrix elements:\n"); // Matris elemanlarını girmek için kullanıcıya talimat ver
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("Enter element [%d,%d]: ", i, j); // Kullanıcıdan matrisin elemanlarını girmesini iste
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\n");

    // Orijinal matrisin durumu
    printf("Original Matrix is:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            printf("%d\t", matrix[i][j]); // Matrisin elemanlarını ekrana yazdır
        }
        printf("\n"); // Her satırın sonunda yeni bir satır başlat
    }
    printf("\n");

    // Transpoz matrisin durumu
    printf("Transpose Matrix is:\n");
    for (i = 0; i < col; i++) {
        for (j = 0; j < row; j++) {
            printf("%d\t", matrix[j][i]); // Matrisin transpozunu ekrana yazdır
        }
        printf("\n"); // Her satırın sonunda yeni bir satır başlat
    }
    return 0;
}