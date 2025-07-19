// Write a C program to input an integer number and check the last digit of number is
// even or odd

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : \n");
    scanf("%d",&n);
    if (n%2 == 0 )
    {
        printf("number is even.\n");
    }else{
        printf("number is odd.\n");
    }
    
}