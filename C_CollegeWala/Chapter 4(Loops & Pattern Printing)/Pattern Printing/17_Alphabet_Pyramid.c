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
        int A = 65;
       // method 2 unsing Extra variables....
       for (int i = 1; i <= nsp; i++)
       {
        printf(" ");
       }
       nsp = nsp - 1;
       for (int j = 1; j <= nst; j++)
       {
        printf("%c ",(char)A);
        A++;
       }
       nst = nst + 2;        
        printf("\n");
    }

    return 0;
}
