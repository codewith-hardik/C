#include <stdio.h>
int main()
{
    int arr[] = {1, 4, 6, 5, 9, 7, 2, 0, 3, 5};
    int n = 10;
    for (int i = 0; i < n - 1; i++)
    {

        for (int j = 0; j < n - 1 - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}