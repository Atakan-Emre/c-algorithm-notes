// Fig. 7.6: fig07_06.c
// Cube a variable using pass-by-value.
#include <stdio.h>

// function prototype
int cubeByValue(int n);

int main(void)
{
    int number = 5; // initialize number

    printf("The original value of number is %d", number);

    // pass number by value to cubeByValue
    number = cubeByValue(number);

    printf("\nThe new value of number is %d\n", number);
}

// calculate and return cube of integer argument
int cubeByValue(int n)
{
    return n * n * n; // cube local variable n and return result
}