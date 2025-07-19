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

        for (int j = 1; j <= i; j++) // stars // for rhombus -> j <= n; And remove l vala loop
        {
            printf("*");
        }
        for (int l = 1; l <= n-i; l++)  // for rhombus
        {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}