/*Ques : Given an array of integers, change the value of
all odd indexed elements to its second multiple and
increment all even indexedvalue by IO.
*/

#include <stdio.h>

int main()
{
    int arr[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            arr[i] += 10;
        }
        else
        {
            arr[i] *= 2;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}