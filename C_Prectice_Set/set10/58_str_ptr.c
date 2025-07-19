// 58 Write a C program for sorting using pointer


#include <stdio.h>

void sort(int *arr, int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(arr + i) > *(arr + j)) {
                // Swap using pointer
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[5], i;

    // Input elements
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Sort using pointer
    sort(arr, 5);

    // Print sorted array
    printf("\nSorted Array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));
    }

    return 0;
}
