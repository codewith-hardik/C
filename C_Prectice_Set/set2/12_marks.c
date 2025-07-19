// Write a C program to read marks from keyboard and your program should display
// equivalent grade according to following range (using else.. if ladder)
// [100 - 80 Distinction, 79 - 60 First Class, 59 - 40 Second Class, < 40 Fail ]


#include <stdio.h>

int main() {
    int marks;

    // Reading marks from the user
    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    // Using else-if ladder to determine the grade
    if (marks >= 80 && marks <= 100) {
        printf("Grade: Distinction\n");
    }
    else if (marks >= 60 && marks <= 79) {
        printf("Grade: First Class\n");
    }
    else if (marks >= 40 && marks <= 59) {
        printf("Grade: Second Class\n");
    }
    else if (marks >= 0 && marks < 40) {
        printf("Grade: Fail\n");
    }
    else {
        printf("Invalid marks entered.\n");
    }

    return 0;
}
