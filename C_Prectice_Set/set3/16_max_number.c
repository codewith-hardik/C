// Write a C program to find out the Maximum and Minimum number from given 10
// Numbers

#include<stdio.h>
int main(){
    int arr[10],max,min;
    printf("Enter 10 numbers : \n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }

    max = min = arr[0];

    for (int i = 1; i < 10; i++)
    {
        if (arr[i]>max)
        {
            max = arr[i];
        }
        if (arr[i]<min)
        {
            min = arr[i];
        }
    }

      printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    

}