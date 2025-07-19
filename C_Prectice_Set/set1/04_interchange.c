// Write a C program to interchange two numbers

#include <stdio.h>
int main(){
    int a,b,temp;
    printf("Enter first number (a): \n");
    scanf("%d",&a);
    printf("Enter second number (b): \n");
    scanf("%d",&b);
    // swap 
    temp = a;
    a = b;
    b = temp;
    printf("After Swapping : \n");
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
}