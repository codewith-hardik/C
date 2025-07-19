#include <stdio.h>
int main()
{
    int n;
    printf("Enter Number:-");
    scanf("%d", &n);
    /*if (n%5==0 || n%3==0)
    {
        if (n%15!=0)
        {
            printf("Divisible by 5 & 3 not 15");
        }
        else{
            printf("Divisible by 5 & 3 & 15");
        }

    }
    else{
        printf("Not Divisible by 5 & 3");
    }
    */

    if ((n % 3 == 0 || n % 5 == 0) && n % 15 != 0)
    {
        printf("Divisible by 5 or 3 not 15");
    }
    else
    {
        printf(" Number is not required ");
    }
}