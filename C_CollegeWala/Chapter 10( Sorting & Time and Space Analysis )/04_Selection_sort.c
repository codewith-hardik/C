#include <stdio.h>
int main()
{
    int arr[] = {1, 4, 6, 5, 9, 7, 2, 0, 3, 5};
    int n = 10;
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i+1; j < n ; j++)
        {
            if (arr[min_idx] > arr[j])
            {
                min_idx = j;
            }
        }
        int temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
 
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}