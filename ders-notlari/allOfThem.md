# Only

```c
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
```

```c
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
```

```c
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
```

```c
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
```

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int sayi1,sayi2,temp; 
	int i,j;
	do{

	printf("1. sayiyi giriniz (cikis -1):");
	scanf("%d",&sayi1);
	if(sayi1==-1) break; 
	printf("2. sayiyi giriniz:");
	scanf("%d",&sayi2);
	if(sayi1>sayi2) { temp=sayi1; sayi1=sayi2; sayi2=temp; }
	for(i=sayi1;i<=sayi2;i++)
	{
		
		for(j=2;j<i;j++)
		{
			if(i%j==0) {
				break;
			}
		}
		if(i==j) printf("%d ",i);
		
	}
}while(1);
	return 0;
}

/*
1. sayiyi giriniz (cikis -1):5
2. sayiyi giriniz:6
5 1. sayiyi giriniz (cikis -1):3
2. sayiyi giriniz:5
3 5 1. sayiyi giriniz (cikis -1):7
2. sayiyi giriniz:3
3 5 7 1. sayiyi giriniz (cikis -1):-1

*
```

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayi,i;
	do
	{
		printf("\n Sayiyi giriniz: ");
		scanf("%d",&sayi);
		if(sayi<0) {printf("Negatif giremezsiniz!");
			continue;	}
		if(sayi==1) { printf("Degildir."); continue;	}
		if(sayi==0) break;
		
		for(i=2;i<sayi;i++)
		{
			if(sayi%i==0) {
			printf("Degildir!");
			break; 
			}
		}
		if(sayi==i) printf("Bu sayi asaldir!");
		
	}while(sayi!=0);

	return 0;
}

/*
Sayiyi giriniz: 5
Bu sayi asaldir!
 Sayiyi giriniz: 8
Degildir!
 Sayiyi giriniz: 9
Degildir!
 Sayiyi giriniz: 11
Bu sayi asaldir!
 Sayiyi giriniz: 0
*/
```

```c
#include<stdio.h>

int main()
{
	int n;
	int i=1; 
	printf("Sayi giriniz: ");
	scanf("%d",&n);
	
	while(n>=10)
	{
	RSS	n=n/10;
		i++;
	}
	
	printf("%d basamakli",i);

}

/*
2 basamakli
*/
```

```c
#include<stdio.h>

int main()
{
	int a,b=0; 
	printf("5 basamakli bir sayi giriniz:");
	scanf("%d",&a);
	// 12345
	
	b += a%10; // 5
	a=a/10; // 1234
	b=b*10; // 50
	b += a%10; // 54
	a=a/10; // 123
	b=b*10; // 540
	b += a%10; // 543
	a=a/10; // 12
	b=b*10; // 5430
	b += a%10; //5432
	a=a/10; // 1
	b=b*10; //54320
	b += a%10; //54321
	printf("%d",b);
	
}

/*
5 basamakli bir sayi giriniz:12345
54321
*/
```

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	int toplam=0; 
	int i;
	for(i=1;i<=100;i=i+2)
		toplam +=i; 
	toplam=0;
	i=1;

	
	while(i<=100)
	{
		toplam +=i;
		i=i+2; 
	}
	toplam=0;
	i=150;
	
	do{
		toplam +=i;
		i=i+2; 	
		
	}while(i<=100);
	
	printf("Toplam: %d",toplam);	
	return 0;
}

/*
Toplam : 150

*/
```

```c
#include <stdio.h>

int main() {
	int a,b,c,islem; 
	
	printf("1.Sayiyi Giriniz: \n");
	scanf("%d",&a);
	printf("2.Sayiyi Giriniz: \n");
	scanf("%d",&b);
	printf("3.Sayiyi Giriniz: \n");
	scanf("%d",&c);
	
	printf("1. Ortalama yazdir\n");
	printf("2. En kucuk yazdir\n");
	printf("3. En buyuk yazdir\n");
	printf("Islem seciniz:");
	scanf("%d",&islem);
	
	switch(islem)
	{
		case 1:
		printf("%f",(a+b+c)/3.0);
		case 2: 
		a<b&&a<c?printf("%d",a):b<c?printf("%d",b):printf("%d",c);
		break; 
		case 3: 
		if(a>b&&a>c)
			printf("%d",a);
			else if(b>c)
			printf("%d",b);
			else printf("%d",c);
		break;
		default:
		printf("Yanlis girdiniz!");
		break;
	}
	
	return 0;
}

/*
1.Sayiyi Giriniz:
8
2.Sayiyi Giriniz:
11
3.Sayiyi Giriniz:
64
1. Ortalama yazdir
2. En kucuk yazdir
3. En buyuk yazdir
Islem seciniz:1
27.6666678
*/
```

```c
#include<stdio.h>

int main()
{
	int vize,final,ort; 
	
	printf("Vize final notu giriniz: ");
	scanf("%d , %d",&vize,&final);
	ort = vize * 0.4 + final * 0.6; 
	printf("%d ",ort);
	if(ort>=90)
		printf("A notu aldiniz!");
	else if(ort>=80)
		printf("B notu aldiniz!");
	else if(ort>=65)
		printf("C notu aldiniz!");
	else
		printf("D notu aldiniz!");
	/*
	ort>=90?printf("A notu aldiniz"):
		ort>=80?printf("B notu aldiniz"):
			ort>=65?printf("C notu aldiniz"):
				printf("D notu aldiniz. ");
				*/
}

/*
Vize final notu giriniz: 80,70
74 C notu aldiniz!
*/
```

```c
#include<stdio.h>

int main()
{
	
	float c,f; 
	printf("Celsius degerini giriniz: ");
	scanf("%f",&c);
	f=(c-32)/1.8; 
	printf("Fahrenhayt: %.2f",f);
	return 0;
}

/*
Celsius degerini giriniz: 70
Fahrenhayt: 21.11
*/
```

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int i,sayi;
	int toplam =0;  
	do
	{
		printf("Sayiyi giriniz (cikis icin 0 a basin) : ");
		scanf("%d",&sayi);
		toplam += sayi; 
		if(sayi==0) break; 
	}while(1);
	
	printf("Toplam: %d ",toplam);
	
	return 0;
}

/*Sayiyi giriniz (cikis icin 0 a basin) : 5
Sayiyi giriniz (cikis icin 0 a basin) : 6
Sayiyi giriniz (cikis icin 0 a basin) : 7
Sayiyi giriniz (cikis icin 0 a basin) : 8
Sayiyi giriniz (cikis icin 0 a basin) : 0
Toplam: 26
*/
```

```c
#include<stdio.h>

int main()
{
	int sifre=12345,giris; 
	printf("Sistem sifresini giriniz:");
	scanf("%d",&giris);
	if(sifre==giris)
		printf("Kullanici girisi gerceklesti!");
	else {
	printf("Sifre yanlis girildi!!!");
	printf("Ben baska bir satirim!");}
}

/*

Sistem sifresini giriniz:12345
Kullanici girisi gerceklesti!

*/
```

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n,i;
	float a=1,b=1,c;
	printf("%.0f %.0f ",a,b);
	for(i=0;i<50;i++)
	{
		c=a+b; 
		printf("%.0f ",c);
		a=b;
		b=c;
	}
	
		
	return 0;
}

/*

1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765 10946 17711 28657 46368 75025 121393 196418 317811 514229 832040 1346269 2178309 3524578 5702887 9227465 14930352 24157816 39088168 63245984 102334152 165580128 267914272 433494400 701408640 1134903040 1836311680 2971214848 4807526400 7778741248 12586267648 20365008896 32951275520

*/
```

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i,n;
	double fact;
	do{
	fact=1; 
	printf("Bir sayi girniz! : \n");
	scanf("%d",&n);
	if(n==0) break;
	if(n<0) continue;
	
	for(i=1;i<=n;i++)
	{
		fact *= i; 
	}
	printf("Faktoriyel : %f\n",fact);
	}while(n!=0);
	return 0;
}

/*

Bir sayi girniz! :
6
Faktoriyel : 720.000000
Bir sayi girniz! :
4
Faktoriyel : 24.000000
Bir sayi girniz! :
0

*/
```

```c
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int sayi1,sayi2,temp; 
	int i,j;
	do{

	printf("\n1. sayiyi giriniz (cikis -1): \n");
	scanf("%d",&sayi1);
	if(sayi1==-1) break; 
	printf("2. sayiyi giriniz: \n");
	scanf("%d",&sayi2);
	if(sayi1>sayi2) { temp=sayi1; sayi1=sayi2; sayi2=temp; }
	
	for(i=sayi2;;i++)
	{
//	printf("%d",i);	
		if(i%sayi1==0&&i%sayi2==0) break;
	
	}
	printf("EKOK : %d \n",i);

}while(1);
	return 0;
}

/*

1. sayiyi giriniz (cikis -1):
7
2. sayiyi giriniz:
8
EKOK : 56

1. sayiyi giriniz (cikis -1):
1
2. sayiyi giriniz:
3
EKOK : 3

1. sayiyi giriniz (cikis -1):
-1
*/
```

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	int i=1,sayi,toplam=0; 
	do
	{
		printf("%d. sayiyi giriniz: ",i);
		scanf("%d",&sayi);
		if(sayi==0) break; // 0 girince toplama yapıyor
		toplam += sayi;
		i++; 
	}while(1);
	printf("Toplam: %d",toplam);
	
	return 0;
}

/*
1. sayiyi giriniz: 5
2. sayiyi giriniz: 6
3. sayiyi giriniz: 7
4. sayiyi giriniz: 4
5. sayiyi giriniz: 2
6. sayiyi giriniz: 7
7. sayiyi giriniz: 8
8. sayiyi giriniz: 1
9. sayiyi giriniz: 7
10. sayiyi giriniz: 1
11. sayiyi giriniz: -1
12. sayiyi giriniz: 0
Toplam: 47
*/
```

```c
#include <stdio.h>

int main()
{
     int sayi,tersi;
    
    printf("sayi: ");
    scanf("%d",&sayi);
    
    printf("tersi: ");
    while(sayi > 0){
        
        tersi = sayi % 10;
        printf("%d",tersi);
        sayi = sayi / 10;
}
}

/*
sayi: 1234567890
tersi: 0987654321
*/
```

```c
#include <stdio.h>

int main( )
 {
 int x = 1, toplam = 0, y;

 while (x <= 10) {
 y = x * x;
 printf("%d\n", y);
 toplam += y;
 ++x;
 }

 printf ("Toplam : %d\n", toplam);
 return 0;
 }

/*
1
4
9
16
25
36
49
64
81
100
Toplam : 385
*/
```

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
int i, j;
int x,y,bas,son;

printf("x ve y sayisini sirasi ile giriniz: \n");
printf("x : ");
scanf("%d",&x);
printf("y : ");
scanf("%d",&y);

if(x>y){bas=y; son=x;}
else{bas =x ; son=y;}

printf("-------carpim tablosu--------\n");

for(i=bas;i<=son;i++){
	for(j=bas;j<=son;j++){
		printf("%d x %d = %d --- ",i,j,i*j);
	}
	printf("\n");
}
return 0;
}

/*
x ve y sayisini sirasi ile giriniz: 5
9
-------carpim tablosu--------
5 x 5 = 25 --- 5 x 6 = 30 --- 5 x 7 = 35 --- 5 x 8 = 40 --- 5 x 9 = 45 ---
6 x 5 = 30 --- 6 x 6 = 36 --- 6 x 7 = 42 --- 6 x 8 = 48 --- 6 x 9 = 54 ---
7 x 5 = 35 --- 7 x 6 = 42 --- 7 x 7 = 49 --- 7 x 8 = 56 --- 7 x 9 = 63 ---
8 x 5 = 40 --- 8 x 6 = 48 --- 8 x 7 = 56 --- 8 x 8 = 64 --- 8 x 9 = 72 ---
9 x 5 = 45 --- 9 x 6 = 54 --- 9 x 7 = 63 --- 9 x 8 = 72 --- 9 x 9 = 81 ---

*/
```

```c
#include <stdio.com>

// IsLeapYear() fonksiyonu tanımlanıyor
// Bu fonksiyon, verilen bir yılın artık yıl olup olmadığını kontrol eder ve döndürür
int IsLeapYear(int year)
{
   // year % 4 değeri 0 ise ve year % 100 değeri 0 değilse
   // veya year % 400 değeri 0 ise
   // 1 döndür (yıl artık yıldır)
   return( ((year % 4== 0 ) && (year % 100 != 0 )) || (year % 400 == 0 ) );
}

int main()
{
   // yıl değişkeni 2024 olarak tanımlanıyor
   int year = 2024;
   // IsLeapYear() fonksiyonu çağrılarak sonuc değişkenine döndürülen değer atanıyor
   int sonuc = IsLeapYear(year);

   // Eğer sonuc değişkeni 1 ise, yıl artık yıldır
   // Aksi halde, yıl artık yıl değildir
   if (sonuc == 1)
      printf("%d artik yildir.", year);
   else
      printf("%d artik yil degildir.", year);

   // 0 döndür (program başarıyla sonuçlandı)
   return 0;
}
```

![yazilimsihirbazi_coperatorler.jpg](Only%203abb283409a54742a5749bbbd3c37d57/yazilimsihirbazi_coperatorler.jpg)

![yazilimsihirbazimantiksaloperatorler1.png](Only%203abb283409a54742a5749bbbd3c37d57/yazilimsihirbazimantiksaloperatorler1.png)

```c
#include <stdio.h>

// compute_sum() fonksiyonu tanımlanıyor
// Bu fonksiyon, verilen bir sayının 1'den başlayarak o sayıya kadar olan
// tüm sayıların toplamını hesaplar ve döndürür
int compute_sum (int n)
{
   // sum değişkeni tanımlanıyor ve 0 olarak başlatılıyor
   int sum;
   sum = 0;

   // n sayısının 1'den başlayarak 0'a kadar düşen sayıları döngüyle topluyor
   for (n;n>0;n--)
      sum += n;

   // n değişkeninin değeri ekrana yazdırılıyor
   printf("Birinci: %d\n",n);

   // Döngü bittikten sonra, toplam değer döndürülüyor
   return sum;
}

int main (void)
{
   // n ve sum değişkenleri tanımlanıyor
   int n, sum;

   // n değişkeni 5 olarak atanıyor
   n = 5;

   // n değişkeninin değeri ekrana yazdırılıyor
   printf("ikinci: %d\n",n);

   // compute_sum() fonksiyonu çağrılarak, n değişkeninin değeri ile çalıştırılıyor
   // ve sonuç sum değişkenine atanıyor
   sum = compute_sum(n);

   // n değişkeninin değeri tekrar ekrana yazdırılıyor
   printf("Ucuncu: %d\n",n);

   // sum değişkeninin değeri ekrana yazdırılıyor
   printf("Dortuncu: %d\n",sum);

   // 0 döndür (program başarıyla sonuçlandı)
   return 0;
}
```

```c
#include <stdio.h>

// compute_sum() fonksiyonu tanımlanıyor
// Bu fonksiyon, verilen bir sayının 1'den başlayarak o sayıya kadar olan
// tüm sayıların toplamını hesaplar ve döndürür
int compute_sum (int n)
{
   // sum değişkeni tanımlanıyor ve 0 olarak başlatılıyor
   int sum;
   sum = 0;

   // n sayısının 1'den başlayarak 0'a kadar düşen sayıları döngüyle topluyor
   for (n;n>0;n--)
      sum += n;

   // n değişkeninin değeri ekrana yazdırılıyor
   printf("Birinci: %d\n",n);

   // Döngü bittikten sonra, toplam değer döndürülüyor
   return sum;
}

int main (void)
{
   // n ve sum değişkenleri tanımlanıyor
   int n, sum;

   // n değişkeni 5 olarak atanıyor
   n = 5;

   // n değişkeninin değeri ekrana yazdırılıyor
   printf("ikinci: %d\n",n);

   // compute_sum() fonksiyonu çağrılarak, n değişkeninin değeri ile çalıştırılıyor
   // ve sonuç sum değişkenine atanıyor
   sum = compute_sum(n);

   // n değişkeninin değeri tekrar ekrana yazdırılıyor
   printf("Ucuncu: %d\n",n);

   // sum değişkeninin değeri ekrana yazdırılıyor
   printf("Dortuncu: %d\n",sum);

   // 0 döndür (program başarıyla sonuçlandı)
   return 0;
}
```

```c
#include <stdio.h>

// maximum() fonksiyonu tanımlanıyor
// Bu fonksiyon, verilen 3 tamsayıdan en büyüğünü bulur ve döndürür
int maximum (int x,int y,int z)
{
   // max değişkeni, x değişkeninin değerini içerir
   int max=x;

   // Eğer y değişkeni max değişkeninden büyükse
   // y değişkeninin değeri max değişkenine atanır
   if(y>max)
      max = y;

   // Eğer z değişkeni max değişkeninden büyükse
   // z değişkeninin değeri max değişkenine atanır
   if (z > max)
      max=z;

   // max değişkeni döndürülür (en büyük sayı)
   return max;
}

int main()
{
   // a, b ve c değişkenleri tanımlanıyor
   int a,b,c;

   // Kullanıcıdan 3 tamsayı girdisi isteniyor
   printf("Enter three integers:\n");
   scanf("%d%d%d", &a,&b,&c);

   // maximum() fonksiyonu çağrılarak, a, b ve c değişkenlerinin değerleri ile çalıştırılıyor
   // ve sonuç ekrana yazdırılıyor
   printf("Maximum is: %d\n", maximum(a,b,c));

   // 0 döndür (program başarıyla sonuçlandı)
   return 0;
}
```

```c
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
********************/
```

```c
#include <stdio.h>
#include <stdlib.h>

// Bu kod bloğu, kullanıcıdan bir tamsayı girdisi alır
// ve sonra bu tamsayı kadar satır oluşturarak,
// üstte yıldız çizgileriyle bir elmas şeklinde yıldız deseni oluşturur
int main()
{
   // i, n ve j değişkenleri tanımlanıyor
   int i,n,j;  

   // Kullanıcıdan bir tamsayı girdisi alınıyor
   printf("Satir sayisi giriniz: ");
   scanf("%d",&n);
   printf("\n");

   // i değişkeni 0'dan başlayarak, n değerine kadar döner
   for(i=0;i<n;i++)
   {
      // j değişkeni 0'dan başlayarak, n-1-i değerine kadar döner
      // Bu döngü, elmasın üst yarısındaki boşlukları oluşturur
      for(j=0;j<n-1-i;j++)
         printf(" ");

      // j değişkeni 0'dan başlayarak, 2*i+1 değerine kadar döner
      // Bu kod bloğu, elmasın üst yarısındaki yıldızları oluşturur
      for(j=0;j<2*i+1;j++)
         printf("*");	

      // Bir alt satıra geçiliyor
      printf("\n");
   }

   // i değişkeni n-2 değerinden başlayarak, 0'a kadar döner
   for(i=n-2;i>=0;i--)
   {
      // j değişkeni 0'dan başlayarak, n-1-i değerine kadar döner
      // Bu döngü, elmasın alt yarısındaki boşlukları oluşturur
      for(j=0;j<n-1-i;j++)
         printf(" ");

      // j değişkeni 0'dan başlayarak, 2*i+1 değerine kadar döner
      // Bu döngü, elmasın alt yarısındaki yıldızları oluşturur
      for(j=0;j<2*i+1;j++)
         printf("*");	

      // Bir alt satıra geçiliyor
      printf("\n");
   }

   // Program sonlandırılıyor
   return 0;
}
```

Bu kod bloğunda, elmas şeklinde yıldız deseninin oluşturulması için 2 adet döngü kullanılmıştır. İlk döngü, elmasın üst yarısını oluşturur ve ikinci döngü ise elmasın alt yarısını oluşturur. Her bir döngü içinde, yıldızların yerleştirileceği boşluklar ve yıldızlar için ayrı ayrı döngüler kullanılır. İlk döngü, elmasın üst yarısını oluşturmak için `n` değerine kadar döner. Bu döngü içinde, ilk olarak elmasın üst yarısındaki boşluklar oluşturulur. Bu boşlukların sayısı, elmasın üst yarısındaki satır numarasına göre hesaplanır. Örneğin, eğer `i` değişkeni 2 değerine sahipse, elmasın üst yarısının 3. satırı oluşturulmuş olur ve bu satırdaki boşluk sayısı 2 olur.

Daha sonra, elmasın üst yarısındaki yıldızlar oluşturulur. Yıldızların sayısı da, elmasın üst yarısındaki satır numarasına göre hesaplanır. Örneğin, eğer `i` değişkeni 2 değerine sahipse, elmasın üst yarısının 3. satırı oluşturulmuş olur ve bu satırda 5 yıldız olur.

İkinci döngü ise, elmasın alt yarısını oluşturmak için `n-2` değerine kadar döner. Bu döngü içinde de elmasın alt yarısındaki boşluklar ve yıldızlar aynı şekilde oluşturulur. Elmasın alt yarısındaki boşluk ve yıldız sayıları da, elmasın üst yarısındaki boşluk ve yıldız sayılarına benzer şekilde hesaplanır.

Son olarak, program `return 0;` ile sonlandırılır ve çalışma sona erer.

```c
#include <stdio.h>

int main() {
    int satir;
    printf("Satir sayisi giriniz: \n");
    
    // satiri sayisi aliniyor
    scanf("%d", &satir);
    
    // ust satirlari döndürmek icin dis döngü
    for (int i = 1; i <= satir; i++) {
        int bosluk = 2 * satir - 2 * i;
        
        // ust sutunlari döndürmek icin ic döngü
        for (int j = 1; j <= i; j++) {
            // yıldızlar yazilir
            printf("*");
        }
        
        // bosluklar icin döngü
        for (int j = 1; j <= bosluk; j++) {
            // bosluklar yazilir
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            // yıldızlar yazilir
            printf("*");
        }
        // her satır sonrasi satiri sonlandirir
        printf("\n");
    }
    
    // alt satirlari döndürmek icin dis döngü
    for (int i = satir; i >= 1; i--) {
        int bosluk = 2 * satir - 2 * i;
        
        // alt sutunlari döndürmek icin ic döngü
        for (int j = 1; j <= i; j++) {
            // yıldızlar yazilir
            printf("*");
        }
        
        // bosluklar icin döngü
        for (int j = 1; j <= bosluk; j++) {
            // bosluklar yazilir
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            // yıldızlar yazilir
            printf("*");
        }
        // Her satırdan sonra bitiş çizgisi
        printf("\n");
    }
    return 0;
}
```

```c
#include <stdio.h>

int main() {
    int satir;
    printf("Satir sayisi giriniz: \n");
    
    // Kullanicidan satir sayisi alinir
    scanf("%d", &satir);
    
    // Ust satir sayisini döndürmek için dis döngü
    for (int i = 1; i <= satir; i++) {
        int bosluk = 2 * satir - 2 * i;
        
        // Ust sutunlari döndürmek için ic döngü
        for (int j = 1; j <= i; j++) {
            // Yıldızlar yazilir
            printf("*");
        }
        
        // Bosluklar icin döngü
        for (int j = 1; j <= bosluk; j++) {
            // Bosluklar yazilir
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            // Yıldızlar yazilir
            printf("*");
        }
        // Her satir sonrasi satir sonlandirilir
        printf("\n");
    }
    
    // Alt satir sayisini döndürmek için dis döngü
    for (int i = satir; i >= 1; i--) {
        int bosluk = 2 * satir - 2 * i;
        
        // Alt sutunlari döndürmek için ic döngü
        for (int j = 1; j <= i; j++) {
            // Yıldızlar yazilir
            printf("*");
        }
        
        // Bosluklar icin döngü
        for (int j = 1; j <= bosluk; j++) {
            // Bosluklar yazilir
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            // Yıldızlar yazilir
            printf("*");
        }
        // Her satir sonrasi satir sonlandirilir
        printf("\n");
    }
    return 0;
}
```

```c
#include <stdio.h>
#include <stdlib.h>

int factorial(int n)
{
	if (n == 0)
	return 1;
	return n*factorial(n-1);
}
int main()
{
	int sayi=0;
	printf("Sayi Giriniz: ");
	scanf("%d",&sayi);
	
	printf("%d sayisinin faktoriyeli: %d",sayi,factorial(sayi));

   return 0;
}

/*
#include <stdio.h>

// faktöriyel fonksiyonu, bir sayının faktöriyelini hesaplar
int faktoriyel(int n)
{
   // Eğer n 1 veya daha küçükse, faktöriyel 1'dir
   if (n <= 1)
      return 1;
   // Aksi halde, faktöriyel n*(n-1)'in faktöriyelidir
   else
      return n * faktoriyel(n-1);
}

int main()
{
   int sayi = 5;
   printf("%d! = %d\n", sayi, faktoriyel(sayi));
   return 0;
}

*/
```

0  dan sayıyan kalan olan sayıları toplar

```c
#include <stdio.h>
#include <conio.h>
 
int main()
{
  int i,n,sonuc ;
  // degişkenler tanımlanıyor.
  
   // integer'e karşılık prinf ve scanf'te %d kullanırlır.
   
   printf("Bir sayi giriniz :");
   //Kullanıcıdan değerler alınıyor..
   
   scanf("%d", &n);
   // %d sayının tipini ifade ediyor. & sayısal olanlarda giriliyor.
   //  String bir ifade kullanmak istedeğimizde & işaretini kullanmıyoruz.
   //
   
   sonuc=0;
 
   for  (i=1; i<=n; i++ )
   
   sonuc = sonuc + i;
   
   printf("istediginiz toplam: %d ", sonuc  );  
   // sonuç ekrana yazdırılıyor.. 
    // %f virgüllü sayılar
    // %s string ifadelerinde kullanıyoruz.
    
    return(0);
   
}
```

1. Bir sayının rakamlarının toplamını bulan recursive bir fonksiyon:

```c
#include <stdio.h>

// rakam_toplam fonksiyonu, bir sayının rakamlarının toplamını hesaplar
int rakam_toplam(int n)
{
   // Eğer n 10 veya daha küçükse, rakam toplamı n'dir
   if (n < 10)
      return n;
   // Aksi halde, rakam toplamı n'nin son rakamının toplamından önceki rakamların toplamıdır
   else
      return n % 10 + rakam_toplam(n/10);
}

int main()
{
   int sayi = 0;
   
	printf("Sayi giriniz : ");
	scanf("%d",&sayi);
  printf("Rakam toplami: %d\n", rakam_toplam(sayi));

   return 0;
}
```

1. Bir dizinin elemanlarının toplamını bulan recursive bir fonksiyon:

```c
#include <stdio.h>

// tersten_yaz fonksiyonu, bir dizinin elemanlarını tersten yazar
void tersten_yaz(int dizi[], int boyut)
{
   // Eğer dizinin boyutu 1 veya daha küçükse, dizinin tek elemanını yaz
   if (boyut <= 1)
      printf("%d ", dizi[0]);
   // Aksi halde, dizinin son elemanını yaz, sonraki elemanları tersten_yaz fonksiyonu ile yaz
   else
   {
      printf("%d ", dizi[boyut-1]);
      tersten_yaz(dizi, boyut-1);
   }
}

int main()
{
   int dizi[100];
   int i;
   int boyut;

   printf("Dizi boyutunu giriniz: \n");
   scanf("%d", &boyut);

   printf("%d Adet diziye eleman giriniz: \n", boyut);
   for (i = 0; i < boyut; i++)
   scanf("%d", &dizi[i]);

   tersten_yaz(dizi, boyut);
   printf("\n");
   return 0;
}
```

1. Bir sayının karesini bulan recursive bir fonksiyon:

```c
#include <stdio.h>

// kare fonksiyonu, bir sayının karesini hesaplar
int kare(int n)
{
   // Eğer n 1 veya daha küçükse, kare 1'dir
   if (n <= 1)
      return 1;
   // Aksi halde, kare n ile n-1 arasındaki karelerin toplamıdır
   else
      return n*n + kare(n-1);
}

int main()
{
   int sayi = 4;
   printf("Kare: %d\n", kare(sayi));
   return 0;
}
```

0  dan sayıyan kalan olan sayıları toplayan recursive fonsiyon kodu

```c
#include <stdio.h>

int topla(int sayi)
{
// Eğer sayi 0'a eşitse, fonksiyon 0'ı döndürür
if (sayi == 0)
return 0;
// Aksi halde, sayinin kalanını topla fonksiyonu ile toplayıp, sayıyı da ekler
else
return topla(sayi-1) + sayi;
}

int main()
{
int sayi;

printf("Bir sayi giriniz: ");
scanf("%d", &sayi);

printf("0 ile %d arasindaki sayilarin toplami: %d\n", sayi, topla(sayi));

return 0;
}
```

```c
#include <stdio.h>

int min(int a, int b) {
    if (a < b) {
        return a;
    }
    return min(b, a);
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Minimum value: %d", min(num1, num2));

    return 0;
}
```

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Diziyi sirala
void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    // Rastgele sayi uretecini baslat
    srand(time(0));
    
    // Dizinin boyutunu al
    int n;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);
    
    // Diziyi olustur
    int dizi[n];
    
    // Diziye rastgele sayilar ata
    for (int i = 0; i < n; i++) {
        dizi[i] = rand() % 100;
    }
    
    // Diziyi sirala
    bubbleSort(dizi, n);
    
    // Diziyi yazdir
    for (int i = 0; i < n; i++) {
        printf("%d ", dizi[i]);
    }
    printf("\n");
    
    return 0;
}
```

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	for (int i =1; i<=20;i++)
	{
		printf("%5d", 1+rand()%6);
		if(i%5==0)
		printf("\n");
	}
	return 0;
}
```

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int seed;
	printf("Enter a seed: ");
	scanf("%d",&seed);
	srand(seed);
	
	for(int i=1;i<=10;i++)
	{
		printf("%5d", 1+rand()%6);
		if(i%5==0)
		printf("\n");
	}
	
	return 0;
}
```

```c
#include <stdio.h> // printf() ve scanf() işlevleri için gerekli olan kütüphane
#include <stdlib.h> // srand() ve rand() işlevleri için gerekli olan kütüphane
#include <time.h> // time() işlevi için gerekli olan kütüphane

int main(void)
{
    int iSecret, iGuess; // tahmin edilecek sayı ve kullanıcının tahmini

    srand(time(NULL)); // rastgele sayı üretim sürecini etkinleştir
    iSecret = rand() % 10 + 1; // 1 ile 10 arasında (dahil) bir sayı üret

    do // tahmin yanlış olduğu sürece
    {
        printf("Tahmin et (1 to 10): "); // tahmin isteği
        scanf("%d", &iGuess); // tahmin okuma

        if (iSecret < iGuess) // tahmin çok yüksek
            printf("Gizli numara daha dusuk\n");
        else if (iSecret > iGuess) // tahmin çok düşük
            printf("Gizli numara daha yuksek\n");
    } while (iSecret != iGuess); // tahmin doğruysa döngüden çık

    printf("Tebrikler!\n"); // tahmin doğru, oyun biter

    return 0;
}
```

![2022-11-11_124711.jpg](Only%203abb283409a54742a5749bbbd3c37d57/2022-11-11_124711.jpg)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
	int sayi;
	printf("Sayi Giriniz: ");
	scanf("%d", &sayi);
	
	if(sayi %3 == 0 && sayi %5 == 0)
	{
		printf("Sayi kural 1'e uygundur");
	}
	else if (sayi %7 !=0 || sayi %8 !=0)
	{
		printf("Sayi kural 2'e uygundur");
	}
	else 
	{
		printf("Sayi kurallara uymamaktadir");	
	}
	return 0;
}
```

![Screenshot of Acrobat Pro DC (12-11-2022 15-23-00).png](Only%203abb283409a54742a5749bbbd3c37d57/Screenshot_of_Acrobat_Pro_DC_(12-11-2022_15-23-00).png)

```c
#include <stdio.h>

int main()
{
    int i,j,k,rows;
    
    printf("Satir Sayisini Giriniz : ");
    scanf("%d",&rows);
    
    for(i=rows;i>=1;i--){ // kaç tane satır olacağını döndürüyor
   
        for(j=i;j>=2;j--){ // boşluk sayısını ayarlıyor 
        	
            printf(" ");
    }
    for(k=rows;k>=i;k--){ //satır sayısında 1 eksiltip değeri girdiyor
        printf("%d",k);
    }
    printf("\n");
    }
    return 0;
}
```

![Screenshot of ScreenFloat (12-11-2022 16-29-31).png](Only%203abb283409a54742a5749bbbd3c37d57/Screenshot_of_ScreenFloat_(12-11-2022_16-29-31).png)

```c
#include<stdio.h>

void main(){
	int r,c,sp;
	r=1;
	while(r<=5)
	{
		sp=4;
		
		while(sp>=r)
		{
			printf(" ");
			sp--;
		}
		c=r;
		while(c>=1)
		{
			printf("%d",c);
			c--;
		}
		c=c+2;
		while(c<=r)
		{
			printf("%d",c);
			c++;
		}
		
		
		printf("\n");
		r++;
	}
	
}
```

```c
// Program to create a simple calculator
#include <stdio.h>

int main() {
    char operation;
    double n1, n2;

    printf("bir islem seciniz (+, -, *, /): ");
    scanf("%c", &operation);
    printf("iki deger giriniz: ");
    scanf("%lf,%lf",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%.1f + %.1f = %.1f",n1, n2, n1+n2);
            break;

        case '-':
            printf("%.1f - %.1f = %.1f",n1, n2, n1-n2);
            break;

        case '*':
            printf("%.1f * %.1f = %.1f",n1, n2, n1*n2);
            break;

        case '/':
            printf("%.1f / %.1f = %.1f",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Hata, Dogru deger giriniz);
    }

    return 0;
}
```

10 kişilik bir çalışan grubunun maaşlarına zam yapılacak. Bu 10 kişinin maaşlarını kullanıcıdan bir diziye okuyunuz. **Diziyi parametre olarak alacak** ve bu dizideki maaşların zamdan sonraki değerlerini aşağıdaki kurala göre hesaplayıp aynı diziye yazacak bir **işlev (fonksiyon)** tanımlayınız. Programınız kllanıcıdan maaşları almalı ve hesaplamaları yaptıktan sonra zamlı maaşlarını ekrana yazmalıdır.

kural: Maaşı 3000 birime eşit veya üstünde olanlara %10 , 3000 birimin altında olanlara %10 üzerine ayrıca 100 birim zam yapılacaktır.

```c
#include<stdio.h>
void maas_arttir(int maaslar[], int boyut) {
    int i;
    for (i = 0; i < boyut; i++) {
        if (maaslar[i] >= 3000) {
            maaslar[i] = maaslar[i] + (maaslar[i] * 0.1);
        } else {
            maaslar[i] = maaslar[i] + (maaslar[i] * 0.1) + 100;
        }
    }
}

int main() {
    int i, boyut;
    printf("Calisan sayisini giriniz: ");
    scanf("%d", &boyut);
    int maaslar[boyut];
    for (i = 0; i < boyut; i++) {
        printf("%d. calisanin maasini giriniz: ", i+1);
        scanf("%d", &maaslar[i]);
    }
    maas_arttir(maaslar, boyut);
    printf("Artis sonrasi maaslar: \n");
    for (i = 0; i < boyut; i++) {
        printf("%d. calisan: %d\n", i+1, maaslar[i]);
    }
    return 0;
}
```

```c
#include<stdio.h>
void maas_arttir(int maaslar[], int calisan) {
    int i;
    for (i = 0; i < calisan; i++) {
        if (maaslar[i] >= 3000) {
            maaslar[i] = maaslar[i] + (maaslar[i] * 0.1);
        } else {
            maaslar[i] = maaslar[i] + (maaslar[i] * 0.1) + 100;
        }
    }
}

int main() {
    int i, calisan=10;
    int maaslar[calisan];
		printf("10 calisanin maasini giriniz.\n");
    for (i = 0; i < calisan; i++) {
        printf("%d. calisanin maasini giriniz: ", i+1);
        scanf("%d", &maaslar[i]);
    }
    maas_arttir(maaslar, calisan);
    printf("Artis sonrasi maaslar: \n");
    for (i = 0; i < calisan; i++) {
        printf("%d. calisan: %d\n", i+1, maaslar[i]);
    }
    return 0;
}
```

Bir binanın temelini ve zemin katının maliyeti toplam 2000 birimdir. Bundan sonra üstüne çıkılacak her kat için önceki maliyetin %10’u üzerine 100 birim ekstra maliyet gerektirmektedir. Kullanıcı tarafından verilen kat sayısına göre toplam maliyeti hesaplanacak programı özyinelemeli fonksiyon kullanarak yazınız. 

(işlev,

0 kat için : 2000

1 kat için : 2300

2 kat için : 2630 gibi sonuçlar vermeli)

```c
#include <stdio.h>

int binanin_maliyeti(int katlar) {
    if (katlar == 0) {
        return 2000;
    } else {
        return binanin_maliyeti(katlar - 1) + (binanin_maliyeti(katlar - 1) * 0.1) + 100;
    }
}

int main() {
    int katlar;
    printf("Kat sayisini giriniz: ");
    scanf("%d", &katlar);
    int toplam_maliyet = binanin_maliyeti(katlar);
    printf("%d katli bina icin toplam maliyet: %d", katlar, toplam_maliyet);
    return 0;
}
```

eˣ değeri aşağıdaki formüller hesaplanır. Girilen x değeri için eˣ değerini ilgili formülü kullanarak yaklaşık olarak hesaplayan programı yazın. (math.h kütüphanesi kullanılmayacak) yaklaşık olarak hesaplamak için toplam ifadesinin (x¹⁰/10!) teriminine kadar olan kısmı kullanabilirsiniz. 

eˣ = 1 + x + x²/2! + x³/3! + x⁴/4! + ..

```c
#include <stdio.h>

double faktoriyel(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * faktoriyel(n - 1);
    }
}

double us(double x, int n) {
    int i;
    double sonuc = 1;
    for (i = 1; i <= n; i++) {
        sonuc *= x;
    }
    return sonuc;
}

double e_ust_x(double x) {
    double sonuc = 1;
    int i;
    for (i = 1; i <= 10; i++) {
        sonuc += (us(x, i) / faktoriyel(i));
    }
    return sonuc;
}

int main() {
    double x;
    printf("x degerini giriniz : ");
    scanf("%lf", &x);
    double e_x = e_ust_x(x);
    printf("e^x = %lf", e_x);
    return 0;
}
```

Bir mağazada 20 farklı ürün satılmaktadır. Bu ürünlerin ilk fiyatlarını kullanıcıdan bir diziye okuyunuz. Bu ürünlerin fiyatlarını aşağıdaki kurala göre değiştirilecektir. Bu diziyi parametre olarak alacak bir işlev(fonksiyon) tanımlayınız. Bu işlev dizi üzerinde kurala göre değişiklik yapacaktır. Ürünlerin yeni fiyatları ekrana yazdırılacaktır. Bu programı yazınız.

Kural: Ürün fiyatı 300’e eşit veya 300’ün altında olanlara %10 indirim yapılacak, 300’den büyük olanların fiyatları ise 75 birim arttırılacaktır.

```c
#include <stdio.h>

void fiyatlari_degistir(int fiyatlar[]) {
    int i;
    for (i = 0; i < 20; i++) {
        if (fiyatlar[i] <= 300) {
            fiyatlar[i] -= fiyatlar[i] * 0.1;
        } else {
            fiyatlar[i] += 75;
        }
    }
}

int main() {
    int fiyatlar[20], i;
    printf("Lutfen 20 urunun fiyatlarini giriniz.\n");
    for (i = 0; i < 20; i++) {	
        printf("%d. urunun fiyatini giriniz: ", i+1);
        scanf("%d", &fiyatlar[i]);
    }
    fiyatlari_degistir(fiyatlar);
    printf("Urunlerin yeni fiyatlari:\n");
    for (i = 0; i < 20; i++) {
        printf("%d. urun: %d\n", i+1, fiyatlar[i]);
    }
    return 0;
}
```

Bir Çoçuk ailesine her sene bir önceki senenin 3 katından 7 eksik kitap okuyacağına söz vermiştir. Bu çoçuk ilk sene 4 kitap okursa. girilecek özyinelemeli işlev kullnarak yazınız(çoçuğun sözünü durduğunu varsayılacaktır)

örnek olarak.

0 giriş değer için : 4

1 giriş değeri için : 5

2 giriş değeri için 8 sonuçlarını üretmeklidir.

```c
#include <stdio.h>

int kitap_okuma(int yil) {
    if (yil == 0) {
        return 4;
    } else {
        return kitap_okuma(yil-1) * 3 - 7;
    }
}

int main() {
    int yil;
    printf("Kacinci sene oldugunu giriniz : ");
    scanf("%d", &yil);
    int okunan_kitap = kitap_okuma(yil);
    printf("%d. sene icin okunan kitap sayisi : %d", yil, okunan_kitap);
    return 0;
}
```

```c
#include <stdio.h>

int fibonacci(int n){
    if(n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n,i;
    printf("Terim Sayisini Giriniz: ");
    scanf("%d", &n);
    printf("Fibonacci Dizisi: ");
    for(i=0; i<n; i++){
        printf("%d ", fibonacci(i));
    }
    return 0;
}
```

```c
#include <stdio.h>

void sort(int dizi[], int boyut) {
    int i, j, temp;
    for (i = 0; i < boyut - 1; i++) {
        for (j = 0; j < boyut - i - 1; j++) {
            if (dizi[j] > dizi[j + 1]) {
                temp = dizi[j];
                dizi[j] = dizi[j + 1];
                dizi[j + 1] = temp;
            }
        }
    }
}

int main() {
    int dizi[10], i, boyut;
    printf("Dizinin boyutunu giriniz (max 10): ");
    scanf("%d", &boyut);
    for (i = 0; i < boyut; i++) {
        printf("%d. elemanı giriniz: ", i + 1);
        scanf("%d", &dizi[i]);
    }
    sort(dizi, boyut);
    printf("Sıralanmış dizi: ");
    for (i = 0; i < boyut; i++) {
        printf("%d ", dizi[i]);
    }
    return 0;
}
```

```c
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
```

```c
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
```

```c
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
```

```c
#include<stdio.h>
#include<math.h>
#include<time.h>

float us_alma(float a, int b)
{
	float sonuc=1; 
	int i;
	int isaret; 
	//if(b==0) return 1.0; 
	for(i=0;i<abs(b);i++)
		sonuc = sonuc * a; 
	if(b>0)
	return sonuc;
	else 
	return 1.0/sonuc;  
}

int main()
{
	int dizi[100];
	int i;
	for(i=0;i<100;i++)
		dizi[i]=i+1; 
	for(i=0;i<100;i++)
		printf("%d \n",dizi[i]);
	printf("%f",us_alma(dizi,100));
}
```

```c
#include<stdio.h>

void sort(int a[], int n) {
    int i, j, temp;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Dizinin boyutunu giriniz: ");
    scanf("%d", &n);
    int a[n];
    printf("Dizinin elemanlarini giriniz:\n");
    for (i = 0; i < n; i++) {
        printf("%d. elemani giriniz: ", i+1);
        scanf("%d", &a[i]);
    }
    sort(a, n);
    printf("Sirali dizi:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
```

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
int tahmin, tutulan, d, c, b, a, dogru_rakam = 0, dogru_yer = 0;
srand(time(0));
tutulan = 1000 + rand() % 9000;
printf("Tahmin etmek istediginiz 4 haneli sayiyi giriniz: ");
while (1)
{
    scanf("%d", &tahmin);
    d = tutulan % 10;
    c = (tutulan / 10) % 10;
    b = (tutulan / 100) % 10;
    a = (tutulan / 1000) % 10;
    dogru_rakam = 0;
    dogru_yer = 0;
    if (tahmin == tutulan)
    {
        printf("Tebrikler, sayiyi dogru tahmin ettiniz!\n");
        break;
    }
    else
    {
        if (tahmin % 10 == d)
        {
            dogru_rakam++;
        }
        if ((tahmin / 10) % 10 == c)
        {
            dogru_rakam++;
        }
        if ((tahmin / 100) % 10 == b)
        {
            dogru_rakam++;
        }
        if ((tahmin / 1000) % 10 == a)
        {
            dogru_rakam++;
        }
        if (tahmin % 10 == a)
        {
            dogru_yer++;
        }
        if ((tahmin / 10) % 10 == b)
        {
            dogru_yer++;
        }
        if ((tahmin / 100) % 10 == c)
        {
            dogru_yer++;
        }
        if ((tahmin / 1000) % 10 == d)
        {
            dogru_yer++;
        }
        printf("%d dogru rakam, %d dogru yerde\n", dogru_rakam, dogru_yer);
    }
}
}
```

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int tutulanSayi, tahmin, dogruRakamDogruYer, dogruRakamYanlisYer;
srand(time(0));
tutulanSayi = 1000 + rand() % 9000; // 1000-9999 arasında rastgele bir sayı tutar

do {
    printf("4 haneli bir tahmin yapiniz: ");
    scanf("%d", &tahmin);
    dogruRakamDogruYer = 0;
    dogruRakamYanlisYer = 0;
    for (int i = 0; i < 4; i++) {
        if (tutulanSayi % 10 == tahmin % 10) {
            if (i == (3 - (tutulanSayi % 10) + (tahmin % 10))) {
                dogruRakamDogruYer++;
            } else {
                dogruRakamYanlisYer++;
            }
        }
        tutulanSayi /= 10;
        tahmin /= 10;
    }
    printf("Dogru rakam dogru yer: %d\nDogru rakam yanlis yer: %d\n", dogruRakamDogruYer, dogruRakamYanlisYer);
    tutulanSayi = 1000 + rand() % 9000; // tekrar tutulan sayıyı sıfırlıyoruz
} while (dogruRakamDogruYer != 4); // 4 rakam doğru yerde ise oyunu kazandık

printf("Tebrikler! Tutulan sayi: %d\n", tutulanSayi);

return 0;
}
```

