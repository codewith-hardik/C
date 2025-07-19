// 8 Write a C program to find that the accepted number is Negative, Positive or Zero 

// File: check_sign.c

#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("The number is Positive.\n");
    else if (num < 0)
        printf("The number is Negative.\n");
    else
        printf("The number is Zero.\n");

    return 0;
}
