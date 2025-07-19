#include <stdio.h>
int sum_natural(int n);

int sum_natural(int n){
    if (n==1)
    {
        return 1;
    }else if (n==0)
    {
        return 0;
    }
    return sum_natural(n-1) + n;   
}

int main(){
    int n;
    printf("Enter a positive number : ");
    scanf("%d",&n);

    printf("%d ",sum_natural(n));
    return 0;
}