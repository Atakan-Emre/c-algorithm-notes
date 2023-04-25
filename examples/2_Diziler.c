#include <stdio.h>

//1.ornek

/*
#define SIZE 20


int main(void) {
	
	char string1[SIZE];
	char string2[] = "merhaba ben";
	
	
	printf("%s", "Enter a string (no longer than 19 characters): ");
	scanf("%19s",string1);
	
	
	printf("string1 is: %s\n string2 is: %s\n"
	"string1 with spaces between characters is:\n",
	string1,string2);
	
	
	for (size_t i = 0; i< SIZE && string1[i] != '\0'; ++i) {
		printf ("%c ", string1[i]);
		}
		puts("");
	
}
*/

//2.ornek

/*
void staticArrayInit(void);
void automaticArrayInit(void);

int main(void)
{
	puts("Her Fonksiyonun ilk cagrilisi: ");
	staticArrayInit();
	automaticArrayInit();
	
	puts("\n\n Her Fonksiyonun ikinici cagrilisi: ");
	staticArrayInit();
	automaticArrayInit();
	
	puts("\n\n Her Fonksiyonun ucuncu cagrilisi: ");
	staticArrayInit();
	automaticArrayInit();
	
	puts("\n\n Statik dizi fonksiyonun dorduncu ve besinci cagrilisi: ");
	staticArrayInit();
	staticArrayInit();
}

void staticArrayInit(void)
{
	static int array1[3];
	
	puts("\n staticArrayInit fonksiyonuna deger girilmesi: ");
	
	for (size_t i = 0; i <= 2; ++i){
		printf("array1[%u] = %d ", i, array1[i]);
	}
	
	puts("\n staticArrayInit fonksiyonuna deger girilmesi: ");
	
	
	for (size_t i = 0; i<=2; ++i){
		printf("array1[%u] = %d ", i , array1[i] += 5);
	}
}

void automaticArrayInit(void)
{
	int array2[3] = {1,2,3};
	puts("\n\n automaticArrayInit fonksiyouna girilen degerler: ");
	
	for (size_t i = 0; i <= 2 ; ++i){
		printf("array2[%u] = %d ", i , array2[i]);
	}
	puts("\n automaticArrayInit fonksiyonundaki degerler: ");
	
	for(size_t i = 0; i <= 2; ++i){
		printf("array2[%u] = %d ", i , array2[i] += 5);
	}
	
}

*/

// cıktısı 

/*
Her Fonksiyonun ilk cagrilisi: 

 staticArrayInit fonksiyonuna deger girilmesi: 
array1[0] = 0 array1[1] = 0 array1[2] = 0 
 staticArrayInit fonksiyonuna deger girilmesi: 
array1[0] = 5 array1[1] = 5 array1[2] = 5 

 automaticArrayInit fonksiyouna girilen degerler: 
array2[0] = 1 array2[1] = 2 array2[2] = 3 
 automaticArrayInit fonksiyonundaki degerler: 
array2[0] = 6 array2[1] = 7 array2[2] = 8 

 Her Fonksiyonun ikinici cagrilisi: 

 staticArrayInit fonksiyonuna deger girilmesi: 
array1[0] = 5 array1[1] = 5 array1[2] = 5 
 staticArrayInit fonksiyonuna deger girilmesi: 
array1[0] = 10 array1[1] = 10 array1[2] = 10 

 automaticArrayInit fonksiyouna girilen degerler: 
array2[0] = 1 array2[1] = 2 array2[2] = 3 
 automaticArrayInit fonksiyonundaki degerler: 
array2[0] = 6 array2[1] = 7 array2[2] = 8 

 Her Fonksiyonun ucuncu cagrilisi: 

 staticArrayInit fonksiyonuna deger girilmesi: 
array1[0] = 10 array1[1] = 10 array1[2] = 10 
 staticArrayInit fonksiyonuna deger girilmesi: 
array1[0] = 15 array1[1] = 15 array1[2] = 15 

 automaticArrayInit fonksiyouna girilen degerler: 
array2[0] = 1 array2[1] = 2 array2[2] = 3 
 automaticArrayInit fonksiyonundaki degerler: 
array2[0] = 6 array2[1] = 7 array2[2] = 8 

 Statik dizi fonksiyonun dorduncu ve besinci cagrilisi: 

 staticArrayInit fonksiyonuna deger girilmesi: 
array1[0] = 15 array1[1] = 15 array1[2] = 15 
 staticArrayInit fonksiyonuna deger girilmesi: 
array1[0] = 20 array1[1] = 20 array1[2] = 20 
 staticArrayInit fonksiyonuna deger girilmesi: 
array1[0] = 20 array1[1] = 20 array1[2] = 20 
 staticArrayInit fonksiyonuna deger girilmesi: 
array1[0] = 25 array1[1] = 25 array1[2] = 25  
*/