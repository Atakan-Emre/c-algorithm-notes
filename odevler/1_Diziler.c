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
/*

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

*/

/*
2.Soru
Adımlar :

1. Bir N değeri girdi olarak alınacaktır.
2. N boyutlu bir dizi tanımlanacaktır.
3. N boyutlu diziye rand(), srand() ve time kütüphanesi kullanarak rastgele sayıları diziye kaydediniz.
4. Diziyi ekranda gösteriniz ve diziden silinmesini istediğiniz değeri klavyeden girdi olarak alınız.
5. diziElemanSil fonksiyonu ile istenilen elemanı diziden silerek ekranda gösteriniz. Silinen eleman sonrası dizi sola kaydırılmalıdır.
*/
/*
#include <time.h>

// N boyutlu diziye rastgele sayılar atayan fonksiyon
void diziyeRastgeleSayiAta(int dizi[], int N) {
    int i;
    srand(time(NULL)); // Rastgele sayılar için seed değeri
    for (i = 0; i < N; i++) {
        dizi[i] = rand() % 100; // Dizinin elemanlarına 0-99 arasında rastgele değerler atanır
    }
}

// Diziyi ekrana yazdıran fonksiyon
void diziYazdir(int dizi[], int N) {
    int i;
    printf("Dizi elemanlari:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
}

// Diziden istenilen elemanı silen fonksiyon
void diziElemanSil(int dizi[], int N, int silinecekEleman) {
    int i, j;
    for (i = 0; i < N; i++) {
        if (dizi[i] == silinecekEleman) {
            for (j = i; j < N - 1; j++) {
                dizi[j] = dizi[j + 1];
            }
            dizi[N - 1] = 0; // En son elemanı 0'a eşitleyerek silinmiş gibi gösteriyoruz
            N--; // Dizinin boyutunu bir azaltıyoruz
            i--; // Elemanların kaydırılması sonrası i değerini bir azaltıyoruz
        }
    }
}

int main() {
    int N, i, silinecekEleman;

    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &N);

    int dizi[N];
    diziyeRastgeleSayiAta(dizi, N);

    diziYazdir(dizi, N);

    printf("Silinecek elemani giriniz: ");
    scanf("%d", &silinecekEleman);

    diziElemanSil(dizi, N, silinecekEleman);

    diziYazdir(dizi, N);

    return 0;
}
*/

//Alternatif
/*

#include <time.h>

void diziElemanSil(int a[], int deger, int boyut);

int main() {
    int n;
    int deger;
    printf("Dizinin Boyutunu Giriniz: ");
    scanf("%d", &n);
    int dizi[n];

    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        dizi[i] = rand() % 100;
        printf("%d\t", dizi[i]);
    }

    printf("\n");
    printf("\n");

    printf("Diziden Silinecek Degeri Giriniz : ");
    scanf("%d", &deger);
    diziElemanSil(dizi, deger, n);

    return 0;
}

void diziElemanSil(int a[], int deger, int boyut) {
    for (int i = 0; i < boyut; i++) {
        if (a[i] == deger) {
            for (int j = i; j < boyut - 1; j++) {
                a[j] = a[j + 1];
            }
            boyut--; // boyutu bir azaltın çünkü bir eleman silindi
        }
    }

    printf("Kayit Basariyla Silindi...\n");

    for (int i = 0; i < boyut; i++) {
        printf("%d\t", a[i]);
    }
}

*/

//Alternatif

/*

#include <time.h>

// diziElemanSil fonksiyonunun prototipi
void diziElemanSil(int a[], int deger, int boyut);

int main() {
    int n;
    int deger;

    // Dizinin boyutunu kullanıcıdan al
    printf("Dizinin Boyutunu Giriniz: ");
    scanf("%d", &n);

    // Diziye rastgele sayılar atayarak oluştur
    int dizi[n];
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        dizi[i] = rand() % 100;
        printf("%d\t", dizi[i]);
    }

    printf("\n\n");

    // Diziden silinecek elemanı kullanıcıdan al
    printf("Diziden Silinecek Degeri Giriniz : ");
    scanf("%d", &deger);

    // diziElemanSil fonksiyonunu çağırarak elemanı sil
    diziElemanSil(dizi, deger, n);

    return 0;
}

// Bir diziden eleman silme fonksiyonu
void diziElemanSil(int a[], int deger, int boyut) {
    // Dizi üzerinde dön
    for (int i = 0; i < boyut; i++) {
        // Eleman bulunursa, diğer elemanları sola kaydır
        if (a[i] == deger) {
            for (int j = i; j < boyut; j++) {
                a[j] = a[j + 1];
            }
            // Eleman silindikten sonra dizinin boyutunu azalt
            boyut--;
        }
    }

    printf("Kayit Basariyla Silindi...\n");

    // Eleman silindikten sonra diziyi ekrana yazdır
    for (int i = 0; i < boyut; i++) {
        printf("%d\t", a[i]);
    }
}

*/