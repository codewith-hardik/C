// Design a structure student_record to contain name, branch and total marks obtained.
// Develop a program to read data for 5 students in a class and print them 

#include <stdio.h>

// Define structure
struct student_record {
    char name[50];
    char branch[30];
    int totalMarks;
};

int main() {
    struct student_record students[5];  // Array to store 5 students

    // Input data
    printf("Enter details of 5 students:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", students[i].name);

        printf("Enter branch: ");
        scanf("%s", students[i].branch);

        printf("Enter total marks: ");
        scanf("%d", &students[i].totalMarks);
    }

    // Display data
    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nStudent %d\n", i + 1);
        printf("Name       : %s\n", students[i].name);
        printf("Branch     : %s\n", students[i].branch);
        printf("Total Marks: %d\n", students[i].totalMarks);
    }

    return 0;
}
