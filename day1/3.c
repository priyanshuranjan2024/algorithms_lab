// 1.3 Aim of the program: Write a program to read ‘n’ integers from a disc file that must contain some duplicate values and store them into an array. Perform the following operations on the array.
// a)Find out the total number of duplicate elements.
// b)Find out the most repeating element in the array.

// Input:
// Enter how many numbers you want to read from file: 15

// Output:
// The content of the array: 10 40 35 47 68 22 40 10 98 10 50 35 68 40 10
// Total number of duplicate values = 4
// The most repeating element in the array = 10

#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);

    int arr[n];
    int freq[101]={0};

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        freq[arr[i]]++;
    }

    

    int duplicateCount=0;
    int maxFreq=0;
    int mostRepeating=-1;
    for(int i=0;i<=100;i++){
        if(freq[i]>1){
            duplicateCount++;
        }

        if(freq[i]>maxFreq){
            maxFreq=freq[i];
            mostRepeating=i;
        }
    }

    printf("Total number of duplicate values = %d\n", duplicateCount);
    printf("The most repeating element in the array = %d\n", mostRepeating);

    return 0;
}