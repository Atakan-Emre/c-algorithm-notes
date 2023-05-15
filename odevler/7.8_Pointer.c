// inputting data with a field width
#include <stdio.h>

int main(void)
{
    int x;
    int y;

    printf("Enter a six-digit integer: ");
    scanf("%2d%3d", &x, &y); // İlk iki basamağı x'e, sonraki üç basamağı y'ye okur

    printf("The integers input were %d and %d\n", x, y);

    return 0;
}