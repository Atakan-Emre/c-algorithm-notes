//Using the integer conversion specifiers

#include <stdio.h>

int main(void)
{
    printf("%d\n", 455);
    printf("%i\n", 455); // i printf'de d ile aynı anlama gelir
    printf("%d\n", +455); // artı işareti çıktıda görünmez
    printf("%d\n", -455); // eksi işareti çıktıda görünür
    printf("%hd\n", (short)32000); // short olarak yazdırma
    printf("%lld\n", 20000000000LL); // LL takısı ile literali long long int yapar
    printf("%o\n", 455); // sekizlik tabanda yazdırma --> (707)8 -> 7*8*8 + 0*8 +7*1
    printf("%u\n", 455); // ondalık tabanda ama işaretsiz sayılar
    printf("%u\n", (unsigned int)-455); // işaretsiz olarak yazdırma
    printf("%x\n", 455); // hexadecimal küçük harflerle yazdırma --> 16 tabanında 10 değeri a
    printf("%X\n", 455); // hexadecimal büyük harflerle yazdırma --> 16 tabanında 10 değeri A
                           // (1C7)16 --> 1*16*16 + C*16 + 7, C=12
}