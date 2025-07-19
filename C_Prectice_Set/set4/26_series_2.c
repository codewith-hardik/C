// 26 Write a C program to find 1+1/2+1/3+1/4+....+1/n

#include <stdio.h>
int main() {
    int n;
    float sum = 0.0;

    // Input the value of n
    printf("Enter a number n: ");
    scanf("%d", &n);

    // Calculate the sum of the series
    for (int i = 1; i <= n; i++) {
        sum += 1.0 / i;  // Add the reciprocal of i to sum
    }

    // Output the result
    printf("The sum of the series 1 + 1/2 + 1/3 + ... + 1/%d is: %.2f\n", n, sum);

    return 0;
}
