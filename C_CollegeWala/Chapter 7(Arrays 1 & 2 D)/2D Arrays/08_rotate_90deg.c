#include <stdio.h>
// Transpose of metrix without using any extra metrix
int main()
{
    int n;
    printf("Enter Number of row/column : \n");
    scanf("%d", &n);

    int arr[n][n];
    
    printf("Enter Element of 2D arrays :\n");
    // input element
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\n");
    // transpose of metrix using swaping number(element)
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }

    printf("Transpose metrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    printf("Rotat 90degree of Metrix : \n");  // reverse each rows of transpose...
    for (int i = 0; i < n; i++)
    {
        for (int j = 0,k=n-1; j < k; j++,k--)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
        
    }
    // print rotation of metrix...
     printf("Rotaion of metrix : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}