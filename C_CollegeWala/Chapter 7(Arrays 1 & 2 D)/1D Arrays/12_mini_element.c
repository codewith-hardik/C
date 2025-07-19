#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int min = INT_MAX;
    for (int i = 0; i < 5; i++)
    {
       if (min>arr[i])
       {
            min = arr[i];
       }
       
    }
    printf("Minimum element is : %d \n",min);
    
    return 0;
}