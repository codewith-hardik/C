// Write a C program to find 1+1/2!+1/3!+1/4!+.....+1/n!


#include<stdio.h>

int factorial(int num){
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main(){
    int n;
    float sum = 1.0;
    printf("Enter a number n: \n");
    scanf("%d",&n);
    for (int i = 2; i <= n; i++)
    {
        sum += 1.0/factorial(i);
    }
    printf("The sum of series is : %.3f\n",sum);
}