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
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}