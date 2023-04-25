#include <stdio.h>

//1.ornek

/*
#include <stdlib.h>
#define SIZE 20


int main(void) {
	
char string1[SIZE]; 

// SIZE uzunluğunda bir karakter dizisi olan string1 tanımlandı
char string2[] = "merhaba ben"; 

// boyutu otomatik olarak belirlenen bir karakter dizisi olan string2 tanımlandı ve içerisine "merhaba ben" yazıldı

printf("%s", "Enter a string (no longer than 19 characters): "); 
// kullanıcıdan bir karakter dizisi girmesi istendi
scanf("%19s",string1); 
// girilen karakter dizisi string1'e atanır ve en fazla 19 karakter alır

printf("string1 is: %s\n string2 is: %s\n"
"string1 with spaces between characters is:\n",
string1,string2); 
// girilen ve hazır tanımlanmış karakter dizileri yazdırılır

for (size_t i = 0; i< SIZE && string1[i] != '\0'; ++i) {
	printf ("%c ", string1[i]); 
    // string1'deki her karakter arasına bir boşluk koyularak yazdırılır
	}
	puts(""); 
    // bir alt satıra geçmek için puts() fonksiyonu kullanılır
	
}
*/

//2.ornek

/*

#include <stdlib.h>

//Eğer özel olarak belirtimediyse statik diziler 0 olarak başlatırır.
void staticArrayInit(void); //funtion prototype
void automaticArrayInit(void); //funtion prototype

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

//Statik Yerel diziyi gösteren fonksiyon
void staticArrayInit(void)
{

//Fonksiyon çagrilmadan once elemanlarını 0 ile başlatır. 3 birimlik yer ayırır.
	static int array1[3];
	
	puts("\n staticArrayInit fonksiyonuna deger girilmesi: ");
	
//dizi1 içeriğinin yazdırılması 
	for (size_t i = 0; i <= 2; ++i){
		printf("array1[%u] = %d ", i, array1[i]);
	}
	
	puts("\n staticArrayInit fonksiyonuna deger girilmesi: ");
	
	//dizi1 içeriğinin düzenlenmesi ve çıktısı
	for (size_t i = 0; i<=2; ++i){
		printf("array1[%u] = %d ", i , array1[i] += 5);
	}
}

//Otomatik yerel dizinin gösterimi
void automaticArrayInit(void)
{
//Fonksiyon her çağrıldığında bu değerlerle başlatır.
	int array2[3] = {1,2,3};
	
	puts("\n\n automaticArrayInit fonksiyouna girilen degerler: ");
	//dizi2 nin içeriği
	for (size_t i = 0; i <= 2 ; ++i){
		printf("array2[%u] = %d ", i , array2[i]);
	}
	puts("\n automaticArrayInit fonksiyonundaki degerler: ");
	
//dizi2 içeriğinin düzenlemesi ve çıktısı
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