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