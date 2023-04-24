#include <stdio.h>
#include <stdlib.h>

//1.soru
/*
int main(void) 
{
    // bir dizi oluşturma
    int n[5];
    
    // her elemanın başlangıç değeri olarak sıfır atama
    for (size_t i = 0; i < 5 ; ++i ){
        n[i] = 0;
    }
    
    // tablo başlıklarını yazdırma
    printf("%s%13s\n", "Element" , "Value");
    
    // her elemanın değerini ve sırasını yazdırma
    for (size_t i = 0; i < 5 ; ++i){
        printf("%7u%13d\n", i , n[i]);
    }
    
    return 0;
}

*/
//2.soru
/*
#define SIZE 5
// Sabit bir değer olan SIZE'ı tanımlama
int main(void) 

{
	
	int s[SIZE]; // SIZE boyutunda bir tamsayı dizisi olan 's' tanımlama
	
	for (size_t j = 0; j < SIZE ; ++j ){ // 's' dizisini başlatmak için bir for döngüsü
		s[j] = 2+2*j; // 's' dizisinin her bir elemanına bir değer atama
	}
	printf("%s%13s\n", "Element" , "Value"); // Dizinin sütun başlıklarını yazdırma
		
		for (size_t j = 0; j < SIZE ; ++j){ // Diziyi yazdırmak için bir for döngüsü
		printf("%7u%13d\n", j , s[j]); // Dizinin her bir elemanının dizinini ve karşılık gelen değerini yazdırma
	}
}
*/
//3.soru
/*
int main(void)
{
	
	int n[5] = {32,27,64,18,95};
	
	printf("%s%13s\n", "Element" , "Value");
	
	for (size_t i = 0 ; i < 5; ++i){
		printf ("%7u%13d\n", i , n[i]);
	}
}
*/
//4.soru
/*
#define RESPONSES_SIZE 40
#define FREQUENCY_SIZE 11

int main(void) {
    int frequency[FREQUENCY_SIZE] = {0};
    int responses[RESPONSES_SIZE] = {1, 2, 6, 4, 8, 5, 9, 7, 8, 10,
                                      1, 6, 3, 8, 6, 10, 3, 8, 2, 7,
                                      6, 5, 7, 6, 8, 6, 7, 5, 6, 6,
                                      5, 6, 7, 5, 6, 4, 8, 6, 8, 10};

    // Calculate frequency for each response
    for (size_t answer = 0; answer < RESPONSES_SIZE; ++answer) {
        ++frequency[responses[answer]];
    }

    // Print results
    printf("%s%17s\n", "Rating", "Frequency");

    for (size_t rating = 1; rating < FREQUENCY_SIZE; ++rating) {
        printf("%6d%17d\n", rating, frequency[rating]);
    }

    return 0;
}
*/
//5.soru    
/*
#define FREQUENCY_SIZE 11

int main(void) {
    int studentCount, ratingCounters[FREQUENCY_SIZE] = {0};
    int rating, ratingMax;

    printf("Ogrenci sayisini girin: ");
    scanf("%d", &studentCount);

    printf("Puan araligini girin (orn. 1-10): ");
    scanf("%d-%d", &rating, &ratingMax);

    printf("Ogrenci yanitlarini girin:\n");

    for (int i = 0; i < studentCount; i++) {
        printf("Ogrenci %d, yemek kalitesini %d-%d arasinda degerlendirin: ", i+1, rating, ratingMax);
        int response;
        scanf("%d", &response);

        if (response < rating || response > ratingMax) {
            printf("Gecersiz bir yanit girdiniz. Lutfen %d-%d arasinda bir yanit girin.\n", rating, ratingMax);
            i--;
            continue;
        }

        ratingCounters[response - rating]++;
    }

    printf("\nYanitlarin ozeti:\n");
    printf("%s%17s\n", "Rating", "Frequency");

    for (int i = rating; i <= ratingMax; i++) {
        printf("%6d%17d\n", i, ratingCounters[i - rating]);
    }

    return 0;
}
*/

//6.soru


 

#define FREQUENCY_SIZE 11

//FREQUENCY_SIZE adlı bir makro tanımlanır ve 11 değeri atanır.

int main(void) {

//main fonksiyonu başlatılır.

    int studentCount, ratingCounters[FREQUENCY_SIZE] = {0};
    int rating, ratingMax;

//4 tane değişken tanımlanır. studentCount, ratingCounters, rating ve ratingMax.

    printf("Ogrenci sayisini girin: ");
    scanf("%d", &studentCount);

    printf("Puan araligini girin (orn. 1-10): ");
    scanf("%d-%d", &rating, &ratingMax);

//Kullanıcıdan öğrenci sayısı, puan aralığı gibi girişler alınır.

    printf("Ogrenci yanitlarini girin:\n");

    for (int i = 0; i < studentCount; i++) {
        printf("Ogrenci %d, yemek kalitesini %d-%d arasinda degerlendirin: ", i+1, rating, ratingMax);
        int response;
        scanf("%d", &response);

        if (response < rating || response > ratingMax) {
            printf("Gecersiz bir yanit girdiniz. Lutfen %d-%d arasinda bir yanit girin.\n", rating, ratingMax);
            i--;
            continue;
        }

        ratingCounters[response - rating]++;
    }

/* Kullanıcıdan her bir öğrenci için bir puan girmesini isteyen bir döngü oluşturulur. 
Eğer girilen puan, rating ve ratingMax aralığı dışında ise, kullanıcıya bir hata mesajı gösterilir ve öğrencinin puanını tekrar girmesi istenir. 
Son olarak, ratingCounters dizisindeki ilgili elemanın değeri bir artırılır.*/

    printf("\nYanitlarin ozeti:\n");
    printf("%s%17s\n", "Rating", "Frequency");

    for (int i = rating; i <= ratingMax; i++) {
        printf("%6d%17d\n", i, ratingCounters[i - rating]);
    }

/*Kullanıcının girdiği puanların frekansı hesaplanır ve sonuçlar ekrana yazdırılır.*/

    return 0;
}

//main fonksiyonu sonlandırılır.


