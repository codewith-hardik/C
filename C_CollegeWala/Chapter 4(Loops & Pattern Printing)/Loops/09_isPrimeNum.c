#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d", &n);

    int p = 1;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            p = 0;
            break;
        }
    }
    if (p == 0)
        printf("%d is not prime number.", n);
    else if (p == 1)
        printf("%d is prime number.", n);
    else if (n == 1 || n == 0)
        printf("%d is not prime number.", n);

    return 0;
}