// 41 Write a C program to convert string into upper case

#include <stdio.h>
#include <ctype.h>  // For toupper() function

int main() {
    char str[100];

    // Input string
    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe, use fgets() for real applications

    // Convert each character to uppercase
    for (int i = 0; str[i] != '\0'; i++) {
        str[i] = toupper(str[i]);
    }

    // Output the uppercase string
    printf("String in Uppercase: %s\n", str);

    return 0;
}

