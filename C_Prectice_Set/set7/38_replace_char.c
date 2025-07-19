// 38 Write a C program to replace a character in given string 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], oldChar, newChar;
    int i;

    // Input string
    printf("Enter a string: ");
    gets(str);  // Use fgets(str, sizeof(str), stdin); for safer input in real programs

    // Input character to replace
    printf("Enter the character to replace: ");
    scanf("%c", &oldChar);

    // Clear input buffer and take new character
    // getchar();  // to consume the newline left in buffer
    printf("Enter the new character: ");
    scanf(" %c", &newChar);

    // Replace character in string
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == oldChar) {
            str[i] = newChar;
        }
    }

    // Output result
    printf("Modified string: %s\n", str);

    return 0;
}

