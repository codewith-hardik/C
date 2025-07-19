#include<stdio.h>

int main(){
    int arr[5] = {1,2,3,4,5};
    int Product = 1;
    for (int i = 0; i < 5; i++)
    {
        Product *= arr[i];
    }
    printf("Product of all element : %d \n",Product);
    
    return 0;
}