// Define a structure named “personal” that would contain person name, date of joining
// and salary. Use this structure to read this information of 5 people and print the same
// on screen

#include <stdio.h>

// Define structure
struct personal {
    char name[50];
    char dateOfJoining[15];
    float salary;
};

int main() {
    struct personal p[5];  // Array of 5 structure variables

    // Input details
    printf("Enter details of 5 people:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nPerson %d\n", i + 1);
        printf("Enter name: ");
        scanf("%s", p[i].name);

        printf("Enter date of joining (DD/MM/YYYY): ");
        scanf("%s", p[i].dateOfJoining);

        printf("Enter salary: ");
        scanf("%f", &p[i].salary);
    }

    // Display details
    printf("\n--- Personal Information of 5 People ---\n");
    for (int i = 0; i < 5; i++) {
        printf("\nPerson %d\n", i + 1);
        printf("Name           : %s\n", p[i].name);
        printf("Date of Joining: %s\n", p[i].dateOfJoining);
        printf("Salary         : %.2f\n", p[i].salary);
    }

    return 0;
}
