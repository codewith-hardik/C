#include <stdio.h>
int fibonacci_series(int);
int fibonacci_series(int n)
{
    int f;
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    f = fibonacci_series(n - 1) + fibonacci_series(n - 2);
    return f;
}

int main()
{

    int n;
    printf("Enter the term of fibonacci series : ");
    scanf("%d", &n);
    // printf("Fibonacci series is : %d ",fibonacci_series(n));
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", fibonacci_series(i));
    }

    return 0;
}
