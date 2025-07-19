// Write a program to find maximum element from 1-Dimensional array 

#include <stdio.h>

int main() {
    int arr[10], i, max;

    // Input: Read 10 elements
    printf("Enter 10 elements:\n");
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Assume first element is max
    max = arr[0];

    // Check each element
    for (i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Output: Maximum element
    printf("\nMaximum element in the array is: %d\n", max);

    return 0;
}
