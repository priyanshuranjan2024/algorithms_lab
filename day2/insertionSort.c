#include <stdio.h>
#include <time.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        // Move elements greater than key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main() {
    int n = 10;
    
    // Best case: already sorted
    int bestCase[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    // Worst case: reverse sorted
    int worstCase[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    
    // Average case: random order
    int avgCase[] = {3, 7, 2, 9, 1, 6, 5, 8, 4, 10};

    clock_t start, end;
    double time_best, time_worst, time_avg;

    // Best case
    int best[n];
    for (int i = 0; i < n; i++) best[i] = bestCase[i];
    start = clock();
    insertionSort(best, n);
    end = clock();
    time_best = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Worst case
    int worst[n];
    for (int i = 0; i < n; i++) worst[i] = worstCase[i];
    start = clock();
    insertionSort(worst, n);
    end = clock();
    time_worst = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Average case
    int avg[n];
    for (int i = 0; i < n; i++) avg[i] = avgCase[i];
    start = clock();
    insertionSort(avg, n);
    end = clock();
    time_avg = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Output
    printf("\nSorted Best Case Array: ");
    printArray(best, n);
    printf("Time taken (Best Case): %f seconds\n", time_best);

    printf("\nSorted Worst Case Array: ");
    printArray(worst, n);
    printf("Time taken (Worst Case): %f seconds\n", time_worst);

    printf("\nSorted Average Case Array: ");
    printArray(avg, n);
    printf("Time taken (Average Case): %f seconds\n", time_avg);

    return 0;
}
