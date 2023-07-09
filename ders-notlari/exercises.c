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

/*
#include <stdio.h>
#include <string.h>

int main() {
    char word[100];
    printf("Enter a word: ");
    scanf("%s", word);
    
    FILE *fptr;
    fptr = fopen("file2.txt", "w");
    
    if (fptr == NULL) {
        printf("Error!");
        return 1;
    }

    fprintf(fptr, "%s", word);
    fclose(fptr);

    fptr = fopen("file2.txt", "r");
    char ch;
    int index = strlen(word);
    
    printf("Reversed word is: ");
    while (index >= 0) {
        ch = fgetc(fptr);
        printf("%c", word[index]);
        index = index - 1;
    }
    fclose(fptr);

    return 0;
}

*/