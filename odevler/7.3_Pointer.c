//Using the p and % conversion specifiers
#include <stdio.h>

int main(void)
{

int x = 12345; // initialize int x
int *ptr = &x;

printf("The value of ptr is %p\n", ptr);
printf("The address of x is %p\n\n", &x);

printf("Printing %% veya \\ format control string\n");
}