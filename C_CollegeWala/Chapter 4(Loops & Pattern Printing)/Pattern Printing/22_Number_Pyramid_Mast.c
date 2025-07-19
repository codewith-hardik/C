#include <stdio.h>

int main()
{
    int n;
    printf("Enter row : ");
    scanf("%d", &n);
    for (int i = 1; i <= 2*n; i++)
    {
        printf("%d",i);
    }
    printf("\n");

    for (int i = n-1; i>0; i--)
    {
        int a = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d",a);
            a++;
        }
        for (int k = 1; k <= (n - i) * 2; k++)
        {
            printf(" ");
            a++;
        }
        for (int l = 1; l <= i; l++)
        {
            printf("%d",a);
            a++;
        }
        printf("\n");
    }

    return 0;
}