#include <stdio.h>
void print_numbers(int n){
    if (n==0)
    {
        return;
    }   
    printf("%d ",n);
    print_numbers(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    print_numbers(n);
    return 0;
}