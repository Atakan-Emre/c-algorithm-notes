/*
#include <stdio.h>
#include <stdlib.h>


int main() {
	int s,k,giris;
	int yildiz,bosluk;
	printf("Giris: ");
	scanf("%d",&giris);
	
	yildiz=1;
	bosluk = giris - 1;
	
	for(k=0;k<giris;k++){
		for(s=0;s<bosluk;s++){
			printf(" ");
		}
		for (s=0;s<yildiz;s++){
			printf("*");
		}
		printf("\n");
		bosluk--;
		yildiz += 2;
	}
}

/*
Giris: 10
         *
        ***
       *****
      *******
     *********
    ***********
   *************
  ***************
 *****************
*******************
*/

/*
#include <stdio.h>

int main() {
	int i;
	
	for(int i=2;i<=20;i+=2){
		if(i==2)
		continue;
		printf("%d\n",i);
	}
	return 0;
}

/*
4
6
8
10
12
14
16
18
20
*/

/*
#include <stdio.h>

int main() {
	int i;
	
i=0;
while(i<20){
	i++;
	if(i==10)
	break;
}
printf("%d",i);
	return 0;
}
/*
10
*/

/*

#include <stdio.h>  
#include <conio.h>  
void main()  
{    
    int i, j, rows, k, m;  
    printf ("Satir Sayisini Giriniz: ");  
    scanf ("%d", &rows);   
    printf("\n");  
    // dış döngü toplam satırları tanımlar ve i satırlara eşit olmalıdırs  
    for ( i = 1; i <= rows; i++)  
    {  
        // iç döngü tanımlı j, satırlara eşit olmalıdır- i
        for ( j = 1; j <= rows-i; j++)  
        {     
            printf (" ");   
        }  
        // k'nin i'ye eşit olduğu durumlarda for döngüsü kullanın
        for ( k = 1; k <= i; k++)  
        {  
            printf ("%d", k); // numarayı yazdır
        }  
        for (m = i-1; m >=1; m--)  
        {  
            printf("%d", m); // numarayı yazdır
        }  
        printf ("\n");  
    }  
    getch();  
}
*/

/*
#include <stdio.h>
#include <stdlib.h>


int main() {
	int s,k,giris;
	int yildiz,bosluk;
	printf("Giris: ");
	scanf("%d",&giris);
	
	yildiz=1;//
	bosluk = giris - 1;//5-1 4
	
	for(k=0;k<giris;k++){
		for(s=0;s<bosluk;s++){ printf(" ");}
		for (s=0;s<yildiz;s++){ printf("*");}
		printf("\n");
		bosluk--;
		yildiz += 2;
	}
}
*/

/*
#include <stdio.h>

void kucukten_buyuge(int dizi[], int size) {
    int i, j, temp;
    if (size == 1) {
        return;
    }
    for (i = 0; i < size - 1; i++) {
        if (dizi[i] > dizi[i + 1] && dizi[i] != dizi[i + 1]) {
            temp = dizi[i];
            dizi[i] = dizi[i + 1];
            dizi[i + 1] = temp;
        }
    }
    kucukten_buyuge(dizi, size - 1);
}

int main() {
    int size, i;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &size);
    int dizi[size];
    printf("Dizinin elemanlarini giriniz: ");
    for (i = 0; i < size; i++) {
        scanf("%d", &dizi[i]);
    }
    kucukten_buyuge(dizi, size);
    printf("Siralanmis dizi: ");
    for (i = 0; i < size; i++) {
        printf("%d ", dizi[i]);
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void kucukten_buyuge(int dizi[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, i;
    srand(time(0));
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &size);
    int dizi[size];
    for (i = 0; i < size; i++) {
        dizi[i] = rand() % 900 + 100;
    }
    kucukten_buyuge(dizi, size);
    printf("Siralanmis dizi: ");
    for (i = 0; i < size; i++) {
        printf("%d ", dizi[i]);
    }
    return 0;
}
*/

/*
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void kucukten_buyuge(int dizi[], int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

int main() {
    int size, i;
    srand(time(0));
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &size);
    int dizi[size];
    for (i = 0; i < size; i++) {
        dizi[i] = rand() % 900 + 100;
    }
    kucukten_buyuge(dizi, size);
    printf("Siralanmis dizi: ");
    for (i = 0; i < size; i++) {
        printf("%d ", dizi[i]);
    }
    return 0;
}
*/