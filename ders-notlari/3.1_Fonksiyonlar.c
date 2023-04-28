/*
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

/*
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
*/

/*
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
*/

/*
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
*/

/*
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
*/

/*
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
*/

/*
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

*/


/*
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
*/

/*
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

*/