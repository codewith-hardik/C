#include <stdio.h>

int main()
{
    // 1st metrix
    int r;
    printf("Enter Number of row : \n");
    scanf("%d", &r);
    int c;
    printf("Enter Number of Column : \n");
    scanf("%d", &c);
    int arr[r][c];
    int brr[r][c];
    int res[r][c];
    printf("Enter Element of 1st Metrix:\n");
    // input element of 1st metrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
     printf("Enter Element of 2nd Metrix:\n");
    // input element of 2nd metrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&brr[i][j]);
        }
    }
    printf("\n");

    // sum of metrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            res[i][j] = arr[i][j] + brr[i][j];
        }
        
    }
    
    printf("Sum of Metrix is : \n");
    // print sum of metrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}