#include <stdio.h>

int main()
{
    int n;
    printf("Enter row number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= n - i; k++) // spaces
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++) // stars
        {
            printf("*");
        }

        
        printf("\n");
    }

    return 0;
}