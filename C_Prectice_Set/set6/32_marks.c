// 32 Write a C program to read and store the roll No and marks of 20 students using array 

#include <stdio.h>

int main() {
    int rollNo[20];
    float marks[20];

    // Input section
    for (int i = 0; i < 20; i++) {
        printf("Enter Roll Number of Student %d: ", i + 1);
        scanf("%d", &rollNo[i]);

        printf("Enter Marks of Student %d: ", i + 1);
        scanf("%f", &marks[i]);
    }

    // Output section
    printf("\n--- Students Data ---\n");
    printf("Roll No\tMarks\n");
    for (int i = 0; i < 20; i++) {
        printf("%d\t%.2f\n", rollNo[i], marks[i]);
    }

    return 0;
}
