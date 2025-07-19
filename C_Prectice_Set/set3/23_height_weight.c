// Read five person’s height and weight and count the number of person having height
// greater than 170 and weight less than 50 

#include <stdio.h>

int main() {
    float height[5], weight[5];
    int count = 0;

    // Input height and weight for 5 people
    for (int i = 0; i < 5; i++) {
        printf("Enter height (in cm) for person %d: ", i + 1);
        scanf("%f", &height[i]);
        printf("Enter weight (in kg) for person %d: ", i + 1);
        scanf("%f", &weight[i]);
    }

    // Count persons with height > 170 and weight < 50
    for (int i = 0; i < 5; i++) {
        if (height[i] > 170 && weight[i] < 50) {
            count++;
        }
    }

    // Display the result
    printf("\nNumber of persons with height > 170 cm and weight < 50 kg: %d\n", count);

    return 0;
}
