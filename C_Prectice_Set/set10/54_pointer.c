// Write a C program to print address of variable using pointer and access elements
// using pointer
#include <stdio.h>
int main() {
    int num = 10;
    int *ptr;  // pointer declaration

    ptr = &num;  // store address of num in ptr

    // Print address and value using pointer
    printf("Address of num: %p\n", ptr);
    printf("Value of num using pointer: %d\n", *ptr);

    // Accessing elements of array using pointer
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr2 = arr;  // pointer points to first element of array

    printf("\nAccessing array elements using pointer:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d = %d (Address = %p)\n", i + 1, *(ptr2 + i), (ptr2 + i));
    }

    return 0;
}
