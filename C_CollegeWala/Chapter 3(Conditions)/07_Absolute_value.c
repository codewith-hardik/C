#include<stdio.h>
int main(){
    int n;
    printf("Enter A Number : ");
    scanf("%d",&n);
    if (n<0)
    {
        n = n * (-1);
    }
    printf("The absolute value is : %d",n);    
}