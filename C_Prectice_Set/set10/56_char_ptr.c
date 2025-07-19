// Write a C program to print the address of character and the character of string using
// pointer


#include <stdio.h>

int main() {
    char str[100];
    char *ptr;

    // Input string
    printf("Enter a string: ");
    gets(str);  // Note: gets() is not safe, but okay for basic learning.

    // Initialize pointer to the start of the string
    ptr = str;

    printf("\nCharacters and their addresses:\n");

    // Loop until null character
    while (*ptr != '\0') {
        printf("Character: %c, Address: %p\n", *ptr, ptr);
        ptr++;
    }

    return 0;
}
