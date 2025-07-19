#include <stdio.h>
int factorial(int n){
    if (n==1 || n==0)
    {
        return 1;
    }
    
    int f = n*factorial(n-1);
    return f;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial of %d is : %d",n,factorial(n));
    return 0;
}