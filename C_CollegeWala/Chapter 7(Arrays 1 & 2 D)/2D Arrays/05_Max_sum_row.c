#include <stdio.h>

int main()
{
    int r;
    printf("Enter Number of row : \n");
    scanf("%d", &r);
    int c;
    printf("Enter Number of Column : \n");
    scanf("%d", &c);
    int arr[r][c];
    int sum = 0;
    int maxSum = 0;
    int row_idx = -1;
    printf("Enter Element of 2D arrays :\n");
    // input element
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n");
    // Max element in row find it
    for (int i = 0; i < r; i++)
    {
        sum = 0;
        for (int j = 0; j < c; j++)
        {
           sum += arr[i][j];
        }
        if (maxSum<sum)
        {
            maxSum = sum;
            row_idx++;
        }
        
    }

    printf("Max sum in row %d is : %d.\n",row_idx,maxSum);
    return 0;
}