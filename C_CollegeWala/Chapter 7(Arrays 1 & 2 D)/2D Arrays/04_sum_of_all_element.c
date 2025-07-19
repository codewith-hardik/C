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
    // print element...
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
           sum += arr[i][j];
        }
    }

    printf("Sum of all Element is : %d.\n",sum);
    return 0;
}