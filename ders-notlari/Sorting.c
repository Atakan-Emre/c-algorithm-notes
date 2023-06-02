#include <stdio.h>

void bubbleSort(int arr[], int n) {
   int i, j, temp;
   for (i = 0; i < n-1; i++) {     
       for (j = 0; j < n-i-1; j++) { 
           if (arr[j] > arr[j+1]) {
              temp = arr[j];
              arr[j] = arr[j+1];
              arr[j+1] = temp;
           }
       }
   }
}

void selectionSort(int arr[], int n) {
   int i, j, min_idx, temp;
   for (i = 0; i < n-1; i++) {
      min_idx = i;
      for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
          min_idx = j;

      temp = arr[min_idx];
      arr[min_idx] = arr[i];
      arr[i] = temp;
   }
}

void insertionSort(int arr[], int n) {
   int i, key, j;
   for (i = 1; i < n; i++) {
       key = arr[i];
       j = i - 1;
       while (j >= 0 && arr[j] > key) {
           arr[j + 1] = arr[j];
           j = j - 1;
       }
       arr[j + 1] = key;
   }
}

void printArray(int arr[], int size) {
   int i;
   for (i = 0; i < size; i++)
       printf("%d ", arr[i]);
   printf("\n");
}

int main() {
   int arr1[] = {64, 34, 25, 12, 22, 11, 90};
   int arr2[] = {64, 34, 25, 12, 22, 11, 90};
   int arr3[] = {64, 34, 25, 12, 22, 11, 90};
   int n = sizeof(arr1)/sizeof(arr1[0]);
   
   bubbleSort(arr1, n);
   printf("Sorted array with Bubble Sort: \n");
   printArray(arr1, n);

   selectionSort(arr2, n);
   printf("Sorted array with Selection Sort: \n");
   printArray(arr2, n);

   insertionSort(arr3, n);
   printf("Sorted array with Insertion Sort: \n");
   printArray(arr3, n);
   
   return 0;
}
