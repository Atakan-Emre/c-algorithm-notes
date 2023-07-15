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

/*
#include <stdio.h>

long long factorial(int n) {
    if(n == 0) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int num;
    printf("Bir sayı girin: ");
    scanf("%d", &num);
    printf("%d'nin faktöriyeli: %lld\n", num, factorial(num));
    return 0;
}

*/

/*
#include <stdio.h>

void findMinMax(int arr[], int len, int* min, int* max) {
    *min = *max = arr[0];
    for(int i = 1; i < len; i++) {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int arr[] = {12, 34, 56, 1, 22, 90, 25};
    int min, max;
    findMinMax(arr, sizeof(arr)/sizeof(arr[0]), &min, &max);
    printf("En küçük eleman: %d\n", min);
    printf("En büyük eleman: %d\n", max);
    return 0;
}

*/

/*
#include <stdio.h>
#include <math.h>

int isArmstrong(int num) {
    int originalNum, remainder, n = 0;
    double result = 0.0;

    originalNum = num;

    while (originalNum != 0) {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum%10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    return (int)result == num;
}

int main() {
    int num;
    printf("Bir sayı girin: ");
    scanf("%d", &num);
    if (isArmstrong(num)) {
        printf("%d bir Armstrong sayısıdır.\n", num);
    } else {
        printf("%d bir Armstrong sayısı değildir.\n", num);
    }
    return 0;
}

*/

/*
#include <stdio.h>

int reverse(int num) {
    int rev = 0;
    while(num != 0) {
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return rev;
}

int main() {
    int num;
    printf("Bir sayı girin: ");
    scanf("%d", &num);
    printf("Ters çevrilmiş sayı: %d\n", reverse(num));
    return 0;
}

*/

/*
// Bir Huffman ağacı düğümünün temsili
struct MinHeapNode {
    char data;             // One of the input characters
    unsigned freq;         // Frequency of the character
    struct MinHeapNode *left, *right; // Left and right child
};

// A utility function allocate a new min heap node with given character and frequency of the character
struct MinHeapNode* newNode(char data, unsigned freq) {
    struct MinHeapNode* temp = (struct MinHeapNode*) malloc(sizeof(struct MinHeapNode));
    temp->left = temp->right = NULL;
    temp->data = data;
    temp->freq = freq;
    return temp;
}

*/

/*

void merge(int arr[], int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2]; // Temp arrays

    // Copy data
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge
    i = 0; j = 0; k = l;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy remaining elements
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

*/

/*
#include<stdio.h>
#include<stdlib.h>

// A list node
typedef struct Node
{
    int key;
    int value;
    struct Node *next, *prev;
} Node;

// A hash
typedef struct Hash
{
    int capacity;
    Node **arr;
} Hash;

// Utility function to create a new Node
Node *newNode(int key, int value)
{
    Node *temp = (Node *)malloc(sizeof(Node));
    temp->key = key;
    temp->value = value;
    temp->next = temp->prev = NULL;
    return temp;
}

// Utility function to create a hash of given capacity.
Hash *createHash(int capacity)
{
    Hash *hash = (Hash *)malloc(sizeof(Hash));
    hash->capacity = capacity;

    // Create a doubly linked list for each hash bucket.
    hash->arr = (Node **)malloc(hash->capacity * sizeof(Node*));
    for (int i = 0; i < hash->capacity; i++)
        hash->arr[i] = NULL;
    return hash;
}

// Note that this is a basic example, you need to implement functions to handle putting, getting, and removing elements from the cache, as well as maintaining the ordering of elements based on their usage.

*/

/*
#include<stdio.h>
#define INF 99999

void dijkstra(int graph[5][5], int src)
{
     int dist[5];
     int sptSet[5];

     for (int i = 0; i < 5; i++)
        dist[i] = INF, sptSet[i] = 0;
        
     dist[src] = 0;

     for (int count = 0; count < 5-1; count++)
     {
       int min = INF, min_index;
 
       for (int v = 0; v < 5; v++)
         if (sptSet[v] == 0 && dist[v] <= min)
             min = dist[v], min_index = v;
 
       int u = min_index;
 
       sptSet[u] = 1;

       for (int v = 0; v < 5; v++)
         if (!sptSet[v] && graph[u][v] && dist[u] != INF
                                       && dist[u]+graph[u][v] < dist[v])
            dist[v] = dist[u] + graph[u][v];
     }
}

// This is a simplified implementation and does not include the complete logic and helper functions needed to run the Dijkstra’s algorithm.

*/

/*
#include<stdio.h>
#define INFINITY 9999
#define MAX 10

void dijkstra(int G[MAX][MAX], int n, int startnode);

int main() {
    int G[MAX][MAX], i, j, n, u;
    printf("Enter no. of vertices:");
    scanf("%d", &n);
    printf("\nEnter the adjacency matrix:\n");

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &G[i][j]);

    printf("\nEnter the starting node:");
    scanf("%d", &u);
    dijkstra(G, n, u);

    return 0;
}

void dijkstra(int G[MAX][MAX], int n, int startnode) {
    int cost[MAX][MAX], distance[MAX], pred[MAX];
    int visited[MAX], count, mindistance, nextnode, i, j;

    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            if(G[i][j] == 0)
                cost[i][j] = INFINITY;
            else
                cost[i][j] = G[i][j];

    for(i = 0; i < n; i++) {
        distance[i] = cost[startnode][i];
        pred[i] = startnode;
        visited[i] = 0;
    }

    distance[startnode] = 0;
    visited[startnode] = 1;
    count = 1;

    while(count < n-1) {
        mindistance = INFINITY;
        for(i = 0; i < n; i++)
            if(distance[i] < mindistance && !visited[i]) {
                mindistance = distance[i];
                nextnode = i;
            }

        visited[nextnode] = 1;
        for(i = 0; i < n; i++)
            if(!visited[i])
                if(mindistance + cost[nextnode][i] < distance[i]) {
                    distance[i] = mindistance + cost[nextnode][i];
                    pred[i] = nextnode;
                }
        count++;
    }

    for(i = 0; i < n; i++)
        if(i != startnode) {
            printf("\nDistance of node%d=%d", i, distance[i]);
            printf("\nPath=%d", i);

            j = i;
            do {
                j = pred[j];
                printf("<-%d", j);
            } while(j != startnode);
    }
}

*/

/*
#include<stdio.h>

void quicksort(int [10], int, int);

int main(){
  int x[20], size, i;

  printf("Enter size of the array: ");
  scanf("%d", &size);

  printf("Enter %d elements: ", size);
  for(i = 0; i < size; i++)
    scanf("%d", &x[i]);

  quicksort(x, 0, size - 1);

  printf("Sorted elements: ");
  for(i = 0; i < size; i++)
    printf(" %d", x[i]);

  return 0;
}

void quicksort(int x[10], int first, int last){
    int pivot, j, temp, i;

     if(first < last){
         pivot = first;
         i = first;
         j = last;

         while(i < j){
             while(x[i] <= x[pivot] && i < last)
                 i++;
             while(x[j] > x[pivot])
                 j--;
             if(i < j){
                 temp = x[i];
                 x[i] = x[j];
                 x[j] = temp;
             }
         }

         temp = x[pivot];
         x[pivot] = x[j];
         x[j] = temp;
         quicksort(x, first, j - 1);
         quicksort(x, j + 1, last);

    }
}

*/

/*

#include <stdio.h>
#include <stdlib.h>

#define MAX_TREE_HT 50

struct MinHeapNode {
    char data;
    unsigned freq;
    struct MinHeapNode *left, *right;
};

struct MinHeap {
    unsigned size;
    unsigned capacity;
    struct MinHeapNode** array;
};

struct MinHeapNode* newNode(char data, unsigned freq) {
    struct MinHeapNode* temp = (struct MinHeapNode*)malloc(sizeof(struct MinHeapNode));
    temp->left = temp->right = NULL;
    temp->data = data;
    temp->freq = freq;
    return temp;
}

struct MinHeap* createMinHeap(unsigned capacity) {
    struct MinHeap* minHeap = (struct MinHeap*)malloc(sizeof(struct MinHeap));
    minHeap->size = 0;
    minHeap->capacity = capacity;
    minHeap->array = (struct MinHeapNode**)malloc(minHeap->capacity * sizeof(struct MinHeapNode*));
    return minHeap;
}

void swapMinHeapNode(struct MinHeapNode** a, struct MinHeapNode** b) {
    struct MinHeapNode* t = *a;
    *a = *b;
    *b = t;
}

void minHeapify(struct MinHeap* minHeap, int idx) {
    int smallest = idx;
    int left = 2 * idx + 1;
    int right = 2 * idx + 2;

    if (left < minHeap->size && minHeap->array[left]->freq < minHeap->array[smallest]->freq)
        smallest = left;

    if (right < minHeap->size && minHeap->array[right]->freq < minHeap->array[smallest]->freq)
        smallest = right;

    if (smallest != idx) {
        swapMinHeapNode(&minHeap->array[smallest], &minHeap->array[idx]);
        minHeapify(minHeap, smallest);
    }
}

int isSizeOne(struct MinHeap* minHeap) {
    return (minHeap->size == 1);
}

struct MinHeapNode* extractMin(struct MinHeap* minHeap) {
    struct MinHeapNode* temp = minHeap->array[0];
    minHeap->array[0] = minHeap->array[minHeap->size - 1];
    --minHeap->size;
    minHeapify(minHeap, 0);
    return temp;
}

void insertMinHeap(struct MinHeap* minHeap, struct MinHeapNode* minHeapNode) {
    ++minHeap->size;
    int i = minHeap->size - 1;
    while (i && minHeapNode->freq < minHeap->array[(i - 1)/2]->freq) {
        minHeap->array[i] = minHeap->array[(i - 1)/2];
        i = (i - 1)/2;
    }
    minHeap->array[i] = minHeapNode;
}

void buildMinHeap(struct MinHeap* minHeap) {
    int n = minHeap->size - 1;
    int i;
    for (i = (n - 1) / 2; i >= 0; --i)
        minHeapify(minHeap, i);
}

void printArr(int arr[], int n) {
    int i;
    for (i = 0; i < n; ++i)
        printf("%d", arr[i]);
    printf("\n");
}

int isLeaf(struct MinHeapNode* root) {
    return !(root->left) && !(root->right);
}

struct MinHeap* createAndBuildMinHeap(char data[], int freq[], int size) {
    struct MinHeap* minHeap = createMinHeap(size);
    for (int i = 0; i < size; ++i)
        minHeap->array[i] = newNode(data[i], freq[i]);
    minHeap->size = size;
    buildMinHeap(minHeap);
    return minHeap;
}

struct MinHeapNode* buildHuffmanTree(char data[], int freq[], int size) {
    struct MinHeapNode *left, *right, *top;
    struct MinHeap* minHeap = createAndBuildMinHeap(data, freq, size);

    while (!isSizeOne(minHeap)) {
        left = extractMin(minHeap);
        right = extractMin(minHeap);

        top = newNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;
        insertMinHeap(minHeap, top);
    }

    return extractMin(minHeap);
}

void printCodes(struct MinHeapNode* root, int arr[], int top) {
    if (root->left) {
        arr[top] = 0;
        printCodes(root->left, arr, top + 1);
    }

    if (root->right) {
        arr[top] = 1;
        printCodes(root->right, arr, top + 1);
    }

    if (isLeaf(root)) {
        printf("%c: ", root->data);
        printArr(arr, top);
    }
}

void HuffmanCodes(char data[], int freq[], int size) {
    struct MinHeapNode* root = buildHuffmanTree(data, freq, size);
    int arr[MAX_TREE_HT], top = 0;
    printCodes(root, arr, top);
}

int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    int freq[] = {5, 9, 12, 13, 16, 45};
    int size = sizeof(arr)/sizeof(arr[0]);
    HuffmanCodes(arr, freq, size);
    return 0;
}

*/

/*

#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *left;
    struct node *right;
};

struct node *newNode(int data) {
    struct node *node = (struct node *)malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return(node);
}

void inorder(struct node *temp) {
    if (temp != NULL) {
        inorder(temp->left);
        printf("%d \n", temp->data);
        inorder(temp->right);
    }
}

void insert(struct node* temp, int key) {
    struct node* newnode = newNode(key);
    struct node* x = temp;
    struct node* y = NULL;

    while (x != NULL) {
        y = x;
        if (key < x->data)
            x = x->left;
        else
            x = x->right;
    }
    if (y == NULL)
        y = newnode;
    else if (key < y->data)
        y->left = newnode;
    else
        y->right = newnode;
}

int main() {
    struct node *root = newNode(50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    inorder(root);

    return 0;
}

*/

/*
#include <stdio.h>
#define SIZE 100

void findMinMax(int arr[], int n, int* min, int* max) {
    *min = *max = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > *max)
            *max = arr[i];
        else if(arr[i] < *min)
            *min = arr[i];
    }
}

int main() {
    int arr[SIZE], n, min, max;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    findMinMax(arr, n, &min, &max);
    printf("Min = %d, Max = %d\n", min, max);
    return 0;
}

*/

/*
#include <stdio.h>
#include <string.h>

int isPalindrome(char str[]) {
    int l = 0;
    int h = strlen(str) - 1;
    while (h > l) {
        if (str[l++] != str[h--]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    if (isPalindrome(str))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}

*/