// Write a C program to check whether the entered character is capital, small letter, digit
// or any special character

#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;

    // Reading a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Checking the type of character using nested if-else
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character '%c' is a capital letter.\n", ch);
    }
    else if (ch >= 'a' && ch <= 'z') {
        printf("The character '%c' is a small letter.\n", ch);
    }
    else if (ch >= '0' && ch <= '9') {
        printf("The character '%c' is a digit.\n", ch);
    }
    else {
        printf("The character '%c' is a special character.\n", ch);
    }

    return 0;
}
