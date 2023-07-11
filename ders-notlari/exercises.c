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

/*
#include <stdio.h>

int main() {
    for(int i=1; i<=100; i++){
        if(i % 3 == 0 && i % 5 == 0)
            printf("FizzBuzz\n");
        else if(i % 3 == 0)
            printf("Fizz\n");
        else if(i % 5 == 0)
            printf("Buzz\n");
        else
            printf("%d\n", i);
    }
    return 0;
}

*/

/*
#include <stdio.h>

void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm = 0;

    for (int i = 1; i <= n; ++i) {
        if(i == 1) {
            printf("%d, ", t1);
            continue;
        }
        if(i == 2) {
            printf("%d, ", t2);
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        
        printf("%d, ",nextTerm);
    }
}

int main() {
    int N;
    printf("Kaç terim yazdırılmalı: ");
    scanf("%d", &N);
    fibonacci(N);
    return 0;
}

*/

/*
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int length = strlen(str);
    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length-i-1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Bir kelime girin: ");
    scanf("%s", str);
    if (isPalindrome(str)) {
        printf("%s palindrom bir kelime.\n", str);
    } else {
        printf("%s palindrom bir kelime değil.\n", str);
    }
    return 0;
}

*/

/* 
#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) return 0; 
    if (num <= 3) return 1; 

    if (num%2 == 0 || num%3 == 0) return 0;

    for (int i=5; i*i<=num; i=i+6) 
        if (num%i == 0 || num%(i+2) == 0) 
            return 0; 

    return 1; 
}

int main() {
    int num;
    printf("Bir sayı girin: ");
    scanf("%d", &num);
    if (isPrime(num)) {
        printf("%d bir asal sayıdır.\n", num);
    } else {
        printf("%d bir asal sayı değildir.\n", num);
    }
    return 0;
}

*/