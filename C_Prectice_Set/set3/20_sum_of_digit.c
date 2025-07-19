// Write a C program to find out sum of first and last digit of a given number
#include <stdio.h>

int main() {
    int num, firstDigit, lastDigit, sum;

    // Reading the number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Finding the last digit
    lastDigit = num % 10;

    // Finding the first digit
    firstDigit = num;
    while (firstDigit >= 10) {
        firstDigit /= 10;
    }

    // Calculating the sum of first and last digits
    sum = firstDigit + lastDigit;

    // Displaying the result
    printf("Sum of first and last digit: %d\n", sum);

    return 0;
}
