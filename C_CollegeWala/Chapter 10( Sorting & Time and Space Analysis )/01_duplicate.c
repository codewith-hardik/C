#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 6};
    int n = 7;
    // for (int i = 0; i < n - 1; i++) // O(n^2)
    // {
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (arr[i] == arr[j])
    //         {
    //             printf("Duplicate number : %d\n", arr[j]);
    //             break;
    //         }
    //     }
    // }

    // int size = sizeof(arr) / sizeof(arr[0]);  // Array length
    // printf("Size of the array: %d\n", size);

    int n_sum = n*(n-1)/2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    if (sum != n_sum)
    {
        int duplicate = sum - n_sum;
        printf("Duplicate Element : %d\n",duplicate);
    }
    
    

    return 0;
}