#include <stdio.h>

int main()
{
    // 1st metrix
    int r;
    printf("Enter Number of row for 1st Metrix: \n");
    scanf("%d", &r);
    int c;
    printf("Enter Number of Column for 1st Metrix : \n");
    scanf("%d", &c);
    int arr[r][c];
    printf("Enter Element of 1st Metrix:\n");

    // input element of 1st metrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    int p;
    printf("Enter Number of row for 2nd Metrix: \n");
    scanf("%d", &p);
    int q;
    printf("Enter Number of Column for 2nd Metrix : \n");
    scanf("%d", &q);
    int brr[p][q];
    printf("Enter Element of 2nd Metrix:\n");
    // input element of 2nd metrix
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &brr[i][j]);
        }
    }
    printf("\n");

    // multiplication of metrix
    int res[r][q];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < q; j++)
        {
            res[i][j] = 0;
            for (int k = 0; k < c; k++)
            {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }

    printf("Multiplication of Metrix is : \n");
    // print sum of metrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}