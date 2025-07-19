// 19 Write a C program to generate first n number of Fibonacci series 
#include <stdio.h>
int main(){
    int n;
    int a = 0;
    int b = 1;
    int sum;
    printf("Enter the number of terms: \n");
    scanf("%d",&n);
    printf("fibonacci series: \n");
    if (n<=0)
    {
        printf("Please enter a positive integer.\n");
    }else{
        for (int i = 1; i <= n; i++)
        {
            printf("%d\n",a);
            sum = a + b;
            a = b;
            b = sum;

        }
                
        
    }
    
}