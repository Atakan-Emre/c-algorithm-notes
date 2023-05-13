/* Bu program, bir dizi içindeki elemanların adreslerini kullanarak bir pointer dizisi oluşturur ve dizinin içeriğini yazdırır.

stdio.h kütüphanesi dahil edilir.
main fonksiyonu başlar.
İki boyutlu bir tamsayı dizisi arr1 oluşturulur ve değerleri atanır.
İki boyutlu bir tamsayı pointer dizisi arr2 oluşturulur.
Pointer dizisi, diğer dizideki elemanların adresleriyle başlatılır.
Pointer dizisini kullanarak dizinin içeriği yazdırılır.
0 değeriyle programın başarıyla sonlandığını belirtir.*/

#include <stdio.h>

// Driver kod
int main()
{
    int arr1[5][5] = {
        {0, 1, 2, 3, 4},
        {2, 3, 4, 5, 6},
        {4, 5, 6, 7, 8},
        {5, 4, 3, 2, 6},
        {2, 5, 4, 3, 1}
    };
    int* arr2[5][5];

    // Pointer dizisi içindeki her bir elemanı
    // diğer dizideki elemanın adresi ile başlatma
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            arr2[i][j] = &arr1[i][j];
        }
    }

    // Pointer dizisini kullanarak
    // diziyi yazdırma
    printf("Degerler:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", *arr2[i][j]);
        }
        printf("\n");
    }

    return 0;
}