#include <stdio.h>
int factorial(int);
int factorial(int n){
    int f;
    if (n==1 || n==0)
    {
        return 1;
    }
    f = factorial(n-1)*n;
    return f;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The factorial of %d is %d.",n,factorial(n));
    return 0;
}