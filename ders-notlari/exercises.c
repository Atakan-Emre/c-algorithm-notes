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

/*
#include <stdio.h>

int main() {
    int numbers[10];
    printf("Enter 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }
    
    FILE *fptr;
    fptr = fopen("file3.txt", "w");
    
    if (fptr == NULL) {
        printf("Error!");
        return 1;
    }

    for (int i = 0; i < 10; i++) {
        fprintf(fptr, "%d\n", numbers[i]);
    }
    fclose(fptr);

    fptr = fopen("file3.txt", "r");
    int num, sum = 0;
    while (fscanf(fptr, "%d", &num) != EOF) {
        sum += num;
    }

    printf("Sum of numbers is: %d", sum);
    fclose(fptr);

    return 0;
}

*/

/*
#include <stdio.h>

int main() {
    FILE *fptr1, *fptr2, *fptr3;
    fptr1 = fopen("file4_1.txt", "r");
    fptr2 = fopen("file4_2.txt", "r");
    fptr3 = fopen("file4_3.txt", "w");
    
    if (fptr1 == NULL || fptr2 == NULL || fptr3 == NULL) {
        printf("Error!");
        return 1;
    }

    int num1, num2, sum;
    fscanf(fptr1, "%d", &num1);
    fscanf(fptr2, "%d", &num2);

    sum = num1 + num2;
    fprintf(fptr3, "%d", sum);

    printf("Sum of numbers is: %d", sum);
    fclose(fptr1);
    fclose(fptr2);
    fclose(fptr3);

    return 0;
}

*/