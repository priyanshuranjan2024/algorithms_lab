// 1.1 Aim of the program: Write a program to find out the second smallest and second largest element stored in an array of n integers. 
// Input: Size of the array is ‘n’ and read ‘n’ number of elements from a disc file.
// Output: Second smallest, Second largest

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    int i;
    int num;
    int smallest = INT_MAX, second_smallest = INT_MAX;
    int largest = INT_MIN, second_largest = INT_MIN;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &num);


        //second  smallest
        if (num < smallest) {
            second_smallest = smallest;
            smallest = num;
        } else if (num < second_smallest && num != smallest) {
            second_smallest = num;
        }

        //second largest
        if (num > largest) {
            second_largest = largest;
            largest = num;
        } else if (num > second_largest && num != largest) {
            second_largest = num;
        }
    }

    if (second_smallest == INT_MAX){
        printf("No second smallest element.\n");
    }else{
        printf("Second smallest element: %d\n", second_smallest);
    }
        

    if (second_largest == INT_MIN){
        printf("No second largest element.\n");
    }else{
        printf("Second largest element: %d\n", second_largest);
    }
        

    return 0;
}
