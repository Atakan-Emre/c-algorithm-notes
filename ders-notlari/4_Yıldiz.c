/*
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

*/

/*

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
*/

/*
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
*/