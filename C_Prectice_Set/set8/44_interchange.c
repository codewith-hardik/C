// 44 Write a C function to interchange the values of two variables, say x and y

#include <stdio.h>

// Function to swap two numbers
void swap(int *x, int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function
    swap(&a, &b);

    // After swapping
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}

