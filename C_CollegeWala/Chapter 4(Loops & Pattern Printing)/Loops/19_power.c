#include<stdio.h>
int main(){

    int a,b;
    printf("Enter Base :- ");
    scanf("%d",&a);
    printf("Enter Power :- ");
    scanf("%d",&b);
    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power*a;
    }
    printf("%d Power of %d is %d",b,a,power);
}