// Write a C program to evaluate the series 1^2+2^2+3^2+……+n^2 

#include <stdio.h>

int main() {
    int n, sum = 0;

    // Input the value of n
    printf("Enter a number n: ");
    scanf("%d", &n);

    // Calculate the sum of squares from 1 to n
    for (int i = 1; i <= n; i++) {
        sum += i * i;  // Add square of i to sum
    }

    // Output the result
    printf("The sum of squares from 1^2 to %d^2 is: %d\n", n, sum);

    return 0;
}
