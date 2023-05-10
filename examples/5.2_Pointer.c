// Fig. 7.7: fig07_07.c
// Cube a variable using pass-by-reference with a pointer argument.
#include <stdio.h>


void cubeByReference(int *nPtr); // function prototype

int main(void)
{
    int number = 5; // initialize number

    printf("The original value of number is %d", number);

    // pass address of number to cubeByReference
    cubeByReference(&number);

    printf("\nThe new value of number is %d\n", number);
}

// calculate cube of *nPtr; actually modifies number in main
void cubeByReference(int *nPtr)
{
    *nPtr = *nPtr * *nPtr * *nPtr; // cube *nPtr
}