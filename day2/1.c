#include <stdio.h>

// Recursive function to convert decimal to 16-bit binary
void decToBinary(int num, char *binary, int index) {
    if (index < 0) return;
    binary[index] = (num % 2) ? '1' : '0';
    decToBinary(num / 2, binary, index - 1);
}

int main() {
    int num;
    printf("Enter a decimal number: ");
    scanf("%d", &num);

    char binary[17]; // 16 bits + '\0'
    binary[16] = '\0';

    decToBinary(num, binary, 15);

    printf("The binary equivalent of %d is %s\n", num, binary);
    return 0;
}
