

// Write a C program to read marks of a student from keyboard and check whether the
// student is pass (marks more than 40) or fail (using if else) 

// File: pass_or_fail.c

#include <stdio.h>

int main() {
    int marks;

    printf("Enter student marks: ");
    scanf("%d", &marks);

    if (marks >= 0 && marks <= 100) {
        if (marks > 40)
            printf("Result: Pass\n");
        else
            printf("Result: Fail\n");
    } else {
        printf("Invalid marks entered. Please enter marks between 0 and 100.\n");
    }

    return 0;
}
