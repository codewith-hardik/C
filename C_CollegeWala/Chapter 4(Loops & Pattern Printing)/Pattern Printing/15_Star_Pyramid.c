#include <stdio.h>

int main()
{
    int n;
    printf("Enter row number : ");
    scanf("%d", &n);
    int nst = 1;
    int nsp = n-1;
    for (int i = 1; i <= n; i++)
    {
        /* // method 1
        for (int k = 1; k <= n - i; k++) // spaces
        {
            printf(" ");
        }

        for (int j = 1; j <= 2*i-1; j++) // stars
        {
            printf("*");
        } */

       // method 2 unsing Extra variables....
       for (int i = 0; i < nsp; i++)
       {
        printf(" ");
       }
       nsp = nsp - 1;
       for (int j = 0; j < nst; j++)
       {
        printf("*");
       }
       nst = nst + 2;        
        printf("\n");
    }

    return 0;
}