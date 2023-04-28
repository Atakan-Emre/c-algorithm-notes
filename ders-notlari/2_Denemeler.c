/*

#include <stdio.h>
#include <stdlib.h>


int main() {
int i, j;
int x,y,bas,son;

printf("x ve y sayisini sirasi ile giriniz: ");
scanf("%d",&x);
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

/*
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
*/