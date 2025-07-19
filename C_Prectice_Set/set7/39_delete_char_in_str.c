// 39 Write a C program to delete a character in given string

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int i, j;

    // Input string
    printf("Enter a string: ");
    gets(str);  // Note: use fgets in real programs for safety

    // Input character to delete
    printf("Enter the character to delete: ");
    scanf("%c", &ch);

    // Delete character by shifting
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            for (j = i; str[j] != '\0'; j++) {
                str[j] = str[j + 1];  // shift characters to left
            }
        }
    }

    // Output result
    printf("Modified string: %s\n", str);

    return 0;
}
