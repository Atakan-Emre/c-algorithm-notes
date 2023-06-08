/*
#include<stdio.h>

unsigned long long int factorial(int n) {
   if(n == 0)
      return 1;
   else
      return n * factorial(n - 1);
}

int main() {
   int n;
   printf("Enter a positive integer: ");
   scanf("%d", &n);
   printf("Factorial of %d = %llu", n, factorial(n));
   return 0;
}
*/
/*
#include<stdio.h>

void printFibonacci(int n) {
   static int n1 = 0, n2 = 1, n3;
   
   if(n > 0) {
      n3 = n1 + n2;
      n1 = n2;
      n2 = n3;
      printf("%d ", n3);
      printFibonacci(n - 1);
   }
}

int main() {
   int n;
   printf("Enter the number of elements: ");
   scanf("%d", &n);
   printf("Fibonacci Series: %d %d ", 0, 1);
   printFibonacci(n - 2);  // n-2 because 2 numbers are already printed
   return 0;
}
*/
/*
#include<stdio.h>

#define SIZE 5

void reverse(int arr[], int start, int end) {
   int temp;
   while(start < end) {
      temp = arr[start];   
      arr[start] = arr[end];
      arr[end] = temp;
      start++;
      end--;
   }   
}    

void printArray(int arr[], int size) {
   int i;
   for(i = 0; i < size; i++)
      printf("%d ", arr[i]);
   printf("\n");
} 

int main() {
   int arr[SIZE] = {1, 2, 3, 4, 5};
   printArray(arr, SIZE);
   reverse(arr, 0, SIZE - 1);
   printf("Reversed array is \n");
   printArray(arr, SIZE);
   return 0;
}
*/
/*
#include <stdio.h>

int checkPrimeNumber(int n) {
    int i;
    for(i = 2; i <= n/2; ++i) {
        if(n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    
    if(checkPrimeNumber(n) == 1)
        printf("%d is a prime number.", n);
    else
        printf("%d is not a prime number.", n);
    
    return 0;
}
*/
/*
#include<stdio.h>
#include<math.h>
int checkArmstrong(int num) {
    int temp, remainder, count = 0;
    double result = 0.0;
    temp = num;
    while (temp != 0) {
        temp /= 10;
        ++count;
    }
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        result += pow(remainder, count);
        temp /= 10;
    }
    return (int)result == num;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (checkArmstrong(num))
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}

*/

/*
#include<stdio.h>
#include<string.h>
int checkPalindrome(char* string) {
    int l = 0;
    int h = strlen(string) - 1;
    while (h > l) {
        if (string[l++] != string[h--]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char string[100];
    printf("Enter a string: ");
    scanf("%s", string);
    if (checkPalindrome(string))
        printf("%s is a palindrome", string);
    else
        printf("%s is not a palindrome", string);
    return 0;
}

*/

/*
#include <stdio.h>
int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
            return mid;
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return -1;
}
int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? printf("Element is not present in array")
                   : printf("Element is present at index %d", result);
    return 0;
}

*/

/*
#include <stdio.h>
int isPerfect(int num) {
    int sum = 1;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            if (i * i != num)
                sum = sum + i + num / i;
            else
                sum = sum + i;
        }
    }
    if (sum == num && num != 1)
        return 1;
    return 0;
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (isPerfect(num))
        printf("%d is a perfect number", num);
    else
        printf("%d is not a perfect number", num);
    return 0;
}

*/