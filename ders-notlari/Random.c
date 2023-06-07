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