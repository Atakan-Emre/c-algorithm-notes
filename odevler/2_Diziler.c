#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]){
	
	char txt[]= "iskenderun";
	int len = 0;
	printf("Cumlemiz: %s\n",txt);
	printf("strelen komutu ile karekter sayisi: %d\n",strlen(txt));
	printf("ilk karakter: %c\n", txt[0]);
	
	// '\0' null boşluk yani son satırı için
	
	len = stringlen(txt);
	printf("stringlen fonskiyonu ile karekter sayisi: %d\n",len);
	
	terstenYazdir(txt,len);
	
	return 0;
	
}

	int stringlen (char txt[]){
		int len = 0; //boyut
		
	for(int i=0;;i++){//ortadaki kısım sonsuz döngü olması için boş
		if(txt[i]=='\0'){
			break;//,f ile şart sağlanırsa döngü kırılmaktadır.
		}
		//şart şağlanmıyorsa indisi kaydet yani dizimizde eleman var.
		len = i; //burada indis kayıt ediliyor.
		
	}	
	
	return len+1; // boyut değeri indis+1 olduğu için bu şekildedir.
		
	}
	
	void terstenYazdir(char txt[], int len){
		for(int i = len; i>= 0; i--){
				printf("tersten yazdirma: %c", txt[i]);
		}
	
	}