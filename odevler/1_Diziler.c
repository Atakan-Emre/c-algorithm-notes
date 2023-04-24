#include <stdio.h>
#include <stdlib.h>
/*
Soru 1
Adımlar:
1. Bir N değerini girdi olarak alınız.
2. N boyutu dizi oluşturunuz
3. N boyutlu diziye sırası ile fibonacci sayılarını kayıt ediniz.
4. Fibonacci dizisini ekranda gösteriniz.

*/

int main(){

	int n, i;
	
		// Kullanıcıdan n değeri istenir.

	do {
	printf("Fibonacci dizisi boyutunu giriniz (minimum n=2 olmalidir.): \n");
	scanf("%d", &n);
	// Eğer girilen n değeri 2'den küçükse tekrar n değeri istenir.
	if (n < 2) {
		printf("Lutfen 2'den buyuk rakam giriniz.\n");

			}
		
	} while (n < 2);

	// Fibonacci dizisi hesaplanır.
	int dizi[n];
	dizi[0] = 0;
	dizi[1] = 1;
	
	printf("\nFibonacci Dizisi:\n");
	
	for (i = 2; i < n; i++) {
		dizi[i] = dizi[i-1] + dizi[i-2];
	}
	
	// Fibonacci dizisi ekrana yazdırılır.
	for (i = 0; i < n; i++) {
		printf("%d ", dizi[i]);
	}
	
	return 0;
}