// 1.2 Aim of the program: Given an array arr[] of size N, find the prefix sum of the array. A prefix sum array is another array prefixSum[] of the same size, such that the value of prefixSum[i] is arr[0] + arr[1] + arr[2] . . . arr[i].

// Input Array: 	3 	4 	5 	1	 2
// Output Array: 	3 	7 	12 	13 	15

#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    int arr[n], prefixSum[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    prefixSum[0] = arr[0];
    for (int i = 1; i < n; i++) {
        prefixSum[i] = prefixSum[i - 1] + arr[i];
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", prefixSum[i]);
    }

    return 0;
}
