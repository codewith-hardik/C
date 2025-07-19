#include <stdio.h>

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    // for (int i = 1; i <= n; i++)
    // {
    //     printf("%d \n",i);
    // }
    for (int i = n; i>0; i--)
    {
        printf("%d \n",i);
    }


    
    return 0;
}