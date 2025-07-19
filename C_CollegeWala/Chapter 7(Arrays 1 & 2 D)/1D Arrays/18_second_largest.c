#include <stdio.h>

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int max = arr[0];
    int smax;
    for (int i = 0; i < 8; i++)
    {
        if (max < arr[i])
        {
            smax = max;
            max = arr[i];
        }
        else if (smax < arr[i] && max != arr[i])
        {
            smax = arr[i];
        }
    }

    printf("Second Maximum element is : %d\n", smax);
    return 0;
}