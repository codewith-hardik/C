// Write a C program to find out which number is even or odd from list of 10 numbers
// using array
#include <stdio.h>
int main() {
    int numbers[10];

    // Input: Read 10 numbers
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // Output: Check even or odd
    printf("\nEven and Odd Results:\n");
    for (int i = 0; i < 10; i++) {
        if (numbers[i] % 2 == 0)
            printf("%d is Even\n", numbers[i]);
        else
            printf("%d is Odd\n", numbers[i]);
    }

    return 0;
}
