#include <stdio.h>

int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int i = 1;
    int sum = 0;
    while(i<=n)
    {
        sum +=i;
        i++;
    }
    printf("Sum of 1 to %d : %d\n",n,sum);
    sum = n*(n+1)/2;
    printf("Sum using Formula : %d",sum);
    return 0;
}