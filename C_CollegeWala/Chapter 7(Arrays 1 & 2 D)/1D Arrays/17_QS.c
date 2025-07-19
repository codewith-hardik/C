/*
FQues : Find the total number of pairs in the Array
whose sum is equal to the aiven value x.
*/

// #include <stdio.h>

// int main()
// {
//     int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//     int x;
//     printf("Enter a number which sum of two pair element : ");
//     scanf("%d", &x);
//     int count = 0;
//     for (int i = 0; i < 8; i++)
//     {
//         for (int j = i+1; j < 8 ; j++)
//         {
//             if (arr[i] + arr[j] == x)
//             {
//                 count++;
//                 printf("pair is : (%d,%d)\n", arr[i], arr[j]);
//             }
//         }
//     }
//     printf("Count of Pair is : %d\n", count);
//     return 0;
// }


/*
Ques : Count the number of triplets whose sum is
equal to the given value x. 
*/


#include <stdio.h>

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int x;
    printf("Enter a number which sum of three pair element : ");
    scanf("%d", &x);
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = i+1; j < 8 ; j++)
        {
            for (int k = j+1; k < 8; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
            {
                count++;
                printf("pair is : (%d,%d,%d)\n", arr[i], arr[j],arr[k]);
            }
            }
            
        }
    }
    printf("Count of Pair is : %d\n", count);
    return 0;
}