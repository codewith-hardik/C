// 57 Write a C program to access array using pointer 

#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;
    int i;

    // Pointer points to the first element of array
    ptr = arr;

    printf("Accessing array elements using pointer:\n");

    for (i = 0; i < 5; i++) {
        printf("Element %d = %d (Address = %p)\n", i + 1, *(ptr + i), (ptr + i));
    }

    return 0;
}

