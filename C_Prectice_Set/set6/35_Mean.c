
// Write a C program to calculate the average, geometric and harmonic mean of n
// elements in an array



#include <stdio.h>
#include <math.h>

int main() {
    int n;
    float arr[100];
    float sum = 0.0, product = 1.0, harmonicSum = 0.0;
    float average, geometricMean, harmonicMean;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%f", &arr[i]);

        sum += arr[i];                 // For average
        product *= arr[i];            // For geometric mean
        harmonicSum += 1.0 / arr[i];  // For harmonic mean
    }

    // Calculations
    average = sum / n;
    geometricMean = pow(product, 1.0 / n);
    harmonicMean = n / harmonicSum;

    // Output results
    printf("\nAverage (Arithmetic Mean) = %.2f\n", average);
    printf("Geometric Mean = %.2f\n", geometricMean);
    printf("Harmonic Mean = %.2f\n", harmonicMean);

    return 0;
}
