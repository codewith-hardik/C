// Write a C program to find the sum and average of different numbers which are
// accepted by user as many as user wants. 


#include <stdio.h>

int main() {
    int num, count = 0;
    float sum = 0, average;

    // Reading numbers until the user enters a negative number
    printf("Enter numbers to calculate sum and average (enter a negative number to stop):\n");

    while (1) {
        scanf("%d", &num);

        // Break if the user enters a negative number
        if (num < 0) {
            break;
        }

        sum += num;   // Add the entered number to the sum
        count++;      // Increase the count of numbers entered
    }

    // Calculate the average if count is greater than 0
    if (count > 0) {
        average = sum / count;
        printf("Sum of numbers: %.2f\n", sum);
        printf("Average of numbers: %.2f\n", average);
    } else {
        printf("No numbers were entered.\n");
    }

    return 0;
}
