// 24 Write a C program to check whether the given number is prime or not

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check if the number is less than 2
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to the square root of the number
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output result
    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}
