#include <stdio.h>
#include<stdbool.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8};
    int x = 4;
    int idx;
    bool flag = false; // element not present in the arrays...
    for (int i = 0; i < 8; i++)
    {
        if (arr[i]== x)
        {
            flag = true;
            idx = i;
            break;
        }        
    }
    if (flag ==true)
    {
        printf("%d is present in the array and its index is %d.\n",x,idx);

    }else{
        printf("%d is not present in the array.\n",x);
    }
    
    
    return 0;
}