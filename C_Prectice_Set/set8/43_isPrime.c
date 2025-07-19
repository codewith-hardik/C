// 43 Write C functions which return 1 if number is prime otherwise returns 0 


#include <stdio.h>

// Function to check if number is prime
int isPrime(int num) {
    if (num <= 1)  // 0 and 1 are not prime
        return 0;

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return 0;  // not prime
    }
    return 1;  // prime
}

int main() {
    int n;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if prime
    if (isPrime(n))
        printf("%d is a prime number.\n", n);
    else
        printf("%d is not a prime number.\n", n);

    return 0;
}

