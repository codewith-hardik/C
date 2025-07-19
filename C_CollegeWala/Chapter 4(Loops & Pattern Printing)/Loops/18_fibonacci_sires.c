#include <stdio.h>
int main()
{
    int n;
    printf("Enter fibonicci number :-");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum = 0;
    if (n == 1 || n == 0)
    {
       printf("The fibonacci is :- 1");
    }
    else
    {
        for (int i = 1; i <= n - 2; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }
    printf("The %dth fibonacci is :-%d\n", n, sum);
    }

}