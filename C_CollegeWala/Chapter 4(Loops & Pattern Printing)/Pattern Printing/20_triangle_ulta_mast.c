#include <stdio.h>

int main()
{
    int n;
    printf("Enter row number : ");
    scanf("%d", &n);
    int nst = n;
    int nsp = 0;
    for (int i = 1; i <= n; i++)
    {

        for (int k = 1; k <= nsp; k++) // spaces
        {
            printf(" ");
        }
        nsp ++;
        for (int j = 1; j <= nst; j++) // stars
        {
            printf("*");
        }
        nst --;
        
        printf("\n");
    }

    return 0;
}