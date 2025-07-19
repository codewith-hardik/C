// 55 Write a C program to swap the two values using pointers 

#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    // Input values
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Before swap
    printf("\nBefore Swap: num1 = %d, num2 = %d\n", num1, num2);

    // Swap using function
    swap(&num1, &num2);

    // After swap
    printf("After Swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

