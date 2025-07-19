#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // int i = 1;
    int facto = 1;
    // while (i<=n)
    // {
    //     facto *=i;
    //     i++;
    // }
    for (int i = 1; i <=n; i++)
    {
        facto *=i;
    }
    
    printf("Factorial is %d ",facto);
    
    return 0;
}