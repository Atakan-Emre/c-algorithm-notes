// Reading input with integer conversion specifiers
#include <stdio.h>

int main(void)
{

int a;
int b;
int c;
int d;
int e;
int f;
int g;
puts("Enter seven integers: ");

puts("\nThe input displayed as decimal integers is:");

printf("signed decimal sayi: ");
scanf("%d", &a); //70

printf("signed decimal sayi: ");
scanf("%i", &b); //70

printf("octal sayi: ");
scanf("%i", &c); //070

printf("hexadecimal sayi: ");
scanf("%i", &d); //0x70

printf("octal sayi: ");
scanf("%o", &e); //70

printf("hexadecimal sayi: ");
scanf("%x", &f); //70

printf("unsigned decimal sayi: ");
scanf("%i", &g); //70

printf("%d %d %d %d %d %d %d\n", a,b,c,d,e,f,g);

}