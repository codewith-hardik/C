// 37 Write a C program to find a character from given string 


#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, found = 0;

    // Input string
    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe, but simple for learning. Use fgets() in real use.

    // Input character to find
    printf("Enter a character to find: ");
    scanf("%c", &ch);

    // Search character in string
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            found = 1;
            break;
        }
    }

    // Output result
    if (found)
        printf("Character '%c' found at position %d.\n", ch, i + 1);  // position starts from 1
    else
        printf("Character '%c' not found in the string.\n", ch);

    return 0;
}

