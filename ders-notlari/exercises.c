/*
#include <stdio.h>

int main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    FILE *fptr;
    fptr = fopen("file1.txt", "w");
    
    if (fptr == NULL) {
        printf("Error!");
        return 1;
    }

    fprintf(fptr, "%d", number);
    fclose(fptr);

    fptr = fopen("file1.txt", "r");
    fscanf(fptr, "%d", &number);

    printf("Value of n=%d", number);
    fclose(fptr);

    return 0;
}

*/