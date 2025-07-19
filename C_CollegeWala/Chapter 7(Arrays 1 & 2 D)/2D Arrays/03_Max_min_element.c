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
    printf("Enter Element of Metrix:\n");
    // input element of 1st metrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int max = arr[0][0];
    int idx_column,idx_row;
    printf("\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
                idx_column = j;
                idx_row = i;
            }
        }
    }
    printf("Max elemetn in metrix is : %d and its index is (%d,%d).\n",max,idx_row,idx_column);
    return 0;
}