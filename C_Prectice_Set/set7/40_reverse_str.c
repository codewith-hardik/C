// 40 Write a C program to reverse string 

#include <stdio.h>
#include <string.h>

int main() {
    char str[100], temp;
    int i, len;

    // Input string
    printf("Enter a string: ");
    gets(str);  // Note: gets() is unsafe, use fgets() in real applications

    len = strlen(str);

    // Reverse the string using swapping
    for (i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }

    // Output reversed string
    printf("Reversed string: %s\n", str);

    return 0;
}

