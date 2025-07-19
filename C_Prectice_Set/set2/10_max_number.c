// Write a C program to read three numbers from keyboard and find out maximum out
// of these three. (nested if else) 


#include <stdio.h>

int main() {
    int num1, num2, num3;

    // Reading three numbers from the keyboard
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Nested if-else to find the maximum number
    if (num1 >= num2) {
        if (num1 >= num3)
            printf("The maximum number is: %d\n", num1);
        else
            printf("The maximum number is: %d\n", num3);
    }
    else {
        if (num2 >= num3)
            printf("The maximum number is: %d\n", num2);
        else
            printf("The maximum number is :- %d\n", num3);
    }

    return 0;
}
