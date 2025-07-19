// Write a C program to read structure elements from keyboard

#include <stdio.h>

// Define structure
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student s;

    // Input structure elements
    printf("Enter student roll number: ");
    scanf("%d", &s.rollNo);

    printf("Enter student name: ");
    scanf("%s", s.name);  // use gets(s.name) if name contains spaces

    printf("Enter student marks: ");
    scanf("%f", &s.marks);

    // Output structure elements
    printf("\n--- Student Details ---\n");
    printf("Roll Number: %d\n", s.rollNo);
    printf("Name       : %s\n", s.name);
    printf("Marks      : %.2f\n", s.marks);

    return 0;
}
