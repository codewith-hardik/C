#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :");
    scanf("%d",&n);
    int a = 1;
    for ( int i = 1; i <= n; i++)   // 1,3,5,7,9...
                                            // a=1;d=2;formula AP =>  An = a+(n-1)*d
    {
        printf("%d ",a);
        a+=2;
    }
}