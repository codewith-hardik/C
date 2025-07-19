#include <stdio.h>
int count(int[],int);
int count(int arr[],int n){
    int no_of_positive = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>0)
        {
            no_of_positive++;
        }
        
    }
    return no_of_positive;
}
int main(){
    int arr[] = {1,2,3,4,5,-6,7,-8,9,-10};
    int n = 10; // total Elements in arry....
    printf("The positive element in array is %d",count(arr,n));
    return 0;
}