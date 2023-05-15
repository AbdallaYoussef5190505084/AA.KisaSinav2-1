#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>

#define A_SIZE 20
#define G_SIZE 10
#define MAX_W 10

// Max value for infinity
#define INF INT_MAX

void generate(int a[], int size);
void function1(int a[], int size);
int function2(int a[], int size);
void function3(int g[][G_SIZE], int d[][G_SIZE], int size);
void printArray(int arr[], int size);
void printMatrix(int mat[][G_SIZE], int size);
void print3(int d[][G_SIZE], int size, int t);

void swap(int* a, int* b);
void quickSort(int a[], int low, int high);
int kadane(int a[], int size);
void initializeGraph(int g[][G_SIZE]);

int main() {
    int a[A_SIZE];
    int g[G_SIZE][G_SIZE];
    int d[G_SIZE][G_SIZE];
    int t;

    // Seed for random number generation
    srand(time(NULL));

    // Time calculation
    clock_t start, end;
    double time;

    start = clock();

    generate(a, A_SIZE);
    printf("A:\n");
    printArray(a, A_SIZE);

    function1(a, A_SIZE);
    printf("\nFunction1 Result:\n");
    printArray(a, A_SIZE);

    t = function2(a, A_SIZE);
    printf("\nFunction2 Result: %d\n", t);

    initializeGraph(g);
    printf("\nG:\n");
    printMatrix(g, G_SIZE);

    function3(g, d, G_SIZE);
    printf("\nFunction3 Result:\n");
    printMatrix(d, G_SIZE);

    printf("\nResult for %d:\n", t);
    print3(d, G_SIZE, t);

    end = clock();
    time = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("\nExecution Time: %f sec\n", time);

    return 0;
}

void generate(int a[], int size) {
    for (int i = 0; i < size; i++) {
        a[i] = rand() % (2 * MAX_W) - MAX_W;
    }
}

void function1(int a[], int size) {
    quickSort(a, 0, size - 1);
}

int function2(int a[], int size) {
    return kadane(a, size);
}

void function3(int g[][G_SIZE], int d[][G_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j) {
                d[i][j] = 0;
            }
            else if (g[i][j] != 0) {
                d[i][j] = g[i][j];
            }
            else {
                d[i][j] = INF;
            }
        }
    }

    for (int k = 0; k < size; k++) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                if (d[i][k] != INF && d[k][j] != INF &&
                    d[i][k] + d[k][j] < d[i][j]) {
                    d[i][j] = d[i][k] + d[k][j];
                }
            }
        }
    }
}
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        if ((i + 1) % 10 == 0) {
            printf("\n");
        }
    }
}

void printMatrix(int mat[][G_SIZE], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (mat[i][j] == INF) {
                printf("INF ");
            }
            else {
                printf("%3d ", mat[i][j]);
            }
        }
        printf("\n");
    }
}

void print3(int d[][G_SIZE], int size, int t) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i != j && d[i][j] < t) {
                printf("%c -> %c: %d\n", 'A' + i, 'A' + j, d[i][j]);
            }
        }
    }
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivot = arr[high];
        int i = low - 1;

        for (int j = low; j <= high - 1; j++) {
            if (arr[j] < pivot) {
                i++;
                swap(&arr[i], &arr[j]);
            }
        }

        swap(&arr[i + 1], &arr[high]);

        quickSort(arr, low, i);
        quickSort(arr, i + 2, high);
    }
}

int kadane(int arr[], int size) {
    int maxSoFar = 0, maxEndingHere = 0;

    for (int i = 0; i < size; i++) {
        maxEndingHere = maxEndingHere + arr[i];
        if (maxEndingHere < 0) {
            maxEndingHere = 0;
        }
        if (maxSoFar < maxEndingHere) {
            maxSoFar = maxEndingHere;
        }
    }

    return maxSoFar;
}

void initializeGraph(int mat[][G_SIZE]) {
    int graph[G_SIZE][G_SIZE] = {
        { 0, 10,  3,  0,  0,  5,  0, 17,  0, 22},
        {10,  0,  5,  0,  2,  0, 13,  0,  0,  0},
        { 3,  5,  0,  2,  0,  4,  0, 21,  0, 11},
        { 0,  0,  2,  0,  7,  0,  6,  0,  0,  0},
        { 0,  2,  0,  7,  0,  6,  0,  0, 19,  0},
        { 5,  0,  4,  0,  6,  0,  0,  0,  0,  9},
        { 0, 13,  0,  6,  0,  0,  0,  0,  0,  0},
        {17,  0, 21,  0,  0,  0,  0,  0,  0,  0},
        { 0,  0,  0,  0,  0,  0,  0,  8,  0, 12},
        {22,  0, 11,  0, 19,  9,  0, 12,  0,  0}
    };

    for (int i = 0; i < G_SIZE; i++) {
        for (int j = 0; j < G_SIZE; j++) {
            mat[i][j] = graph[i][j];
        }
    }
}
