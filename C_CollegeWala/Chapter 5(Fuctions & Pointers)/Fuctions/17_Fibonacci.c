#include<stdio.h>

int main(){
    int a = 0;  // Starting value for Fibonacci sequence
    int b = 1;  // Next value for Fibonacci sequence
    int sum = 0; // To store the current Fibonacci number
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Please enter a positive integer.\n");
    } else {
        printf("Fibonacci Series: ");
        for (int i = 1; i <= n; i++) {
            if (i == 1) {
                printf("%d ", a);
                continue;
            } 
            if (i == 2) {
                printf("%d ", b);
                continue;
            }
            sum = a + b;  // Fibonacci rule: sum = previous two numbers
            a = b;         // Update `a` to the previous number
            b = sum;       // Update `b` to the current sum
            printf("%d ", sum);  // Print the Fibonacci number
        }
        printf("\n");
    }

    return 0;
}
