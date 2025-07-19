// Write a C program to calculate average and total of 5 students for 3 subjects (use
//     nested for loops) 


#include <stdio.h>

int main() {
    int marks[5][3]; // Array to store marks of 5 students in 3 subjects
    int total;
    float average;

    // Input marks for 5 students in 3 subjects
    for (int i = 0; i < 5; i++) {
        total = 0; // Reset total for each student
        printf("Enter marks for student %d:\n", i + 1);
        for (int j = 0; j < 3; j++) {
            printf("  Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
            total += marks[i][j]; // Add marks to total
        }
        average = total / 3.0; // Calculate average
        printf("Total marks: %d, Average marks: %.2f\n\n", total, average);
    }

    return 0;
}
