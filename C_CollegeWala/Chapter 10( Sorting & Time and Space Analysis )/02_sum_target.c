/*
Ques : Given an array of integers numbers that is
already sorted in non-decreasing order, find two
numbers such that they add up to a specific target
number.
*/


#include <stdio.h>

int main(){
    int arr[] = {1,2,3,4,5,8,9,10};
    int n = 10;
    int target = 8;
    int i = 0;
    int j = n-1;
    while (i<j)
    {
        if (arr[i]+arr[j] == target)
        {
            printf("Target achived index %d and %d.\n",i,j);
            break;
        }
        if (arr[i]+arr[j] > target)
        {
            j--;
        }
        if (arr[i]+arr[j] < target)
        {
            i++;
        }
        
        
        
    }
    
    
    return 0;
}