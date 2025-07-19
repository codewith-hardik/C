// Write a C function in which string will be passed as an argument and convert all
// lowercase character into their uppercase equivalents 

#include <stdio.h>
#include <ctype.h>  // For toupper()

// Function to convert lowercase characters to uppercase
void convertToUpper(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char myString[100];

    // Input string
    printf("Enter a string: ");
    gets(myString);  // Warning: unsafe, use fgets() in real programs

    // Call function
    convertToUpper(myString);

    // Output result
    printf("Uppercase string: %s\n", myString);

    return 0;
}
