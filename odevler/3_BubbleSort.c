#include <stdio.h>

//bubble sort fonksiyonu
void bubbleSort(int arr[], int n)
{
    int temp;
    int i, j;

    //dizideki herbir elemanı sıra ile büyüklük küçüklük kontrolü yapınız.
    printf("\nSorting start\n");
    for (i=0;i<n-1;i++) {
        // iç döngü tamamen bittiğinde dizinin en büyük elemanı en sona geçer.
        // i değeri 1 artar ve
        // iç döngünün diziyi sıralamak için kullanıcağı eleman sayısı 1 azalmış olur.
        // böylece sıralanmış ve sana aktarılmış elemanlar tekrar kontrol edilmez.
        for (j=0; j< n-i-1;j++) {
            // dizi elemanlarını arka arka olanları sırası ile karşılaştır
            // eğer dizi elemanı kendinden sonraki elemandan büyükse yer değiştir.
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
        //her döngüde dizinin durumunu görmek için ekrana yazdıralım.
        printArray(arr, n);        
    }
    
    printf("\nSorting finish\n");
}

void printArray(int arr[], int size)
{
    int i;
    for (i=0;i<size;i++)
        printf("%d ",arr[i]);
    printf("\n");
}

//Main fonksiyonu
int main()
{
    int N;
    printf("Dizi boyutu N giriniz:");
    scanf("%d",&N);
    int dizi[N];
    
    printf("N adet dizi elemani girin:\n");
    for (int i=0;i<N;i++) {
        printf("dizi[%d]=",i);
        scanf("%d",&dizi[i]);
    }
    
    printArray(dizi, N);
    
    //diziyi sıralamak için fonksiyona gönder
    bubbleSort(dizi, N);
    
    printf("\n\nSorted array (sirali dizi): \n");
    printArray(dizi, N);
    
    return 0;
}