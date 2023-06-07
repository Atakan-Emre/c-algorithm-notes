/*#include <stdio.h>
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
*/

/*
//Fibonacci Serisi:
#include <stdio.h>

void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int n = 10; 
    fibonacci(n);
    return 0;
}

*/

/*
//Dizi Elemanlarını Sıralama:
#include <stdio.h>

void bubbleSort(int dizi[], int boyut) {
   for (int i = 0; i < boyut-1; i++) {     
       for (int j = 0; j < boyut-i-1; j++) {
           if (dizi[j] > dizi[j+1]) {
               int temp = dizi[j];
               dizi[j] = dizi[j+1];
               dizi[j+1] = temp;
           }
       }
   }
}

int main() {
    int dizi[] = {64, 34, 25, 12, 22, 11, 90};
    int boyut = sizeof(dizi)/sizeof(dizi[0]);
    bubbleSort(dizi, boyut);
    printf("Sorted array: \n");
    for (int i=0; i < boyut; i++)
        printf("%d ", dizi[i]);
    return 0;
}


*/


/*
//Binary Search:
#include <stdio.h>

int binarySearch(int dizi[], int x, int sol, int sag) {
    if (sag >= sol) {
        int ortanca = sol + (sag - sol) / 2;

        if (dizi[ortanca] == x)
            return ortanca;

        if (dizi[ortanca] > x)
            return binarySearch(dizi, x, sol, ortanca - 1);

        return binarySearch(dizi, x, ortanca + 1, sag);
    }

    return -1;
}

int main(void) {
    int dizi[] = {2


*/