/*Ques : Count the number of elements in given array
greater than a given number x.*/

#include<stdio.h>

int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int count = 0;
    int x = 4;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i]>4)
        {
            count++;
        }
    }
    printf("Element which greater than %d is %d",x,count);
    
    return 0;
}