// 42 Write a C program that defines a function to add first n numbers

#include <stdio.h>

// Function to add first n numbers
int sumFirstN(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Call function and display result
    int result = sumFirstN(n);
    printf("Sum of first %d natural numbers = %d\n", n, result);

    return 0;
}
