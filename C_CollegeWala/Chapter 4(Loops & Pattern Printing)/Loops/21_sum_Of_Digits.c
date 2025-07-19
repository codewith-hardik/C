#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :-");
    scanf("%d",&n);
    int ld = 0;  //  ld => last digits ==> n%10;
    int sum = 0;
    while (n>0)
    {
        ld = n%10;
        sum = sum + ld;
        n = n/10;
    }
    printf("Sum Of Digits is :- %d",sum);
    
}