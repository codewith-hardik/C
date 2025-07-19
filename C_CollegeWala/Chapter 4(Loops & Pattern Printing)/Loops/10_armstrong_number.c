#include <stdio.h>
#include <math.h> // For pow() function

int main() {
    int num, originalNum, remainder, result, n;

    printf("Armstrong numbers between 1 and 500 are:\n");

    // Loop through numbers 1 to 500
    for (num = 1; num <= 1000; num++) {
        originalNum = num;
        result = 0;
        n = 0;

        // Count number of digits
        int temp = originalNum;
        while (temp != 0) {
            temp /= 10;
            n++;
        }

        // Compute sum of nth power of digits
        temp = originalNum;
        while (temp != 0) {
            remainder = temp % 10;
            result += pow(remainder, n);
            temp /= 10;
        }

        // Check if the sum is equal to the number
        if (result == num) {
            printf("%d ", num);
        }
    }

    printf("\n");
    return 0;
}
 