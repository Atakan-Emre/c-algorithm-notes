/*
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
*/

/*
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
*/


/*
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
*/