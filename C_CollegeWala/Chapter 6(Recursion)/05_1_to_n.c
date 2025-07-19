#include <stdio.h>
void print_number(int a,int n){
    if (a>n)
    {
        return;
    }
    printf("%d ",a);
    print_number(a+1,n);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    print_number(1,n);
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d ",i);
    // }
    
    return 0;
}