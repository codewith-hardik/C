#include <stdio.h>

int main()
{
    int n;
    printf("Enter row : ");
    scanf("%d", &n);
    int min = 0;
    for (int i = 1; i <= 2*n-1; i++)
    {
        for (int  j = 1; j <= 2*n-1; j++)
        {
            int a = i;
            int b = j;
            if(a>n) a = 2*n-i;
            if(b>n) b = 2*n-j;
            if(a>b) min = b;
            else min = a;
            printf(" %d ",n+1-min);
        }
        printf("\n");
        printf("\n");
    }
    
    return 0;
}