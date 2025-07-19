#include <stdio.h>

int main(){
    int n;
    printf("Enter Odd number for printing star plus : ");
    scanf("%d",&n);
    int midel_point = n/2 + 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == midel_point || j == midel_point)
            {
                printf("*");
            }else{
                printf(" ");
            }
            
        }
        printf("\n");
    }
    
    return 0;
}