#include <stdio.h>

int main(){
    int n,m;
    // for number of line....
    printf("Enter row : ");
    scanf("%d",&n);
    // for number of star....
    printf("Enter colum : ");
    scanf("%d",&m);
    // n == m => solid square....
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf("*");// for print *
            // printf("%d",j); // for print number
        }
        printf("\n");
    }
    
    return 0;
}