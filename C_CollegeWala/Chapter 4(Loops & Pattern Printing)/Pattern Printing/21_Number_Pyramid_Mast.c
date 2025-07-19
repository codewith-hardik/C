#include <stdio.h>

int main()
{
    int n;
    printf("Enter row : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
           printf("*"); 
        }
        for (int k = 1; k <= (n - i) * 2; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= i; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n-1; i>0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
           
            printf("*");
        }
        for (int k = 1; k <= (n - i) * 2; k++)
        {
            printf(" ");
        }
        for (int l = 1; l <= i; l++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}