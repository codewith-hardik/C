#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int sum_even = 0;
    int sum_odd = 0;
    for (int i = 0; i < 5; i++)
    {
        if (i%2==0) // even element
        {
            sum_even += arr[i];
        }else{
            sum_odd += arr[i];
        }
    }
    int different = sum_even-sum_odd;
    printf("Difference between even and odd element is : %d \n",different);
    
    return 0;
}