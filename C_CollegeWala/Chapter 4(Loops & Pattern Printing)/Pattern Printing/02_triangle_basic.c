#include <stdio.h>

int main(){
    int n;
    printf("Enter row : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            // printf("%d",j); // for print -> numbers
            printf("*"); // for print -> *
        }
        printf("\n");
    }
    
    return 0;
}