// Write a C program to find factorial of a given number 
#include<stdio.h>
int main(){
    int num;
    float f = 1;
    printf("Enter a number: \n");
    scanf("%d",&num);
    if (num<0)
    {
        printf("Factorial is not defined for negative number.\n");

    }else{
        for (int i = 1; i <= num; i++)
        {
            f = f*i;
        }
        printf("Factorial of %d is = %.2f\n",num,f);
    }
    
}