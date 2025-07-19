#include<stdio.h>
void reverse(int arr[],int si,int ei){
    for (int i = si,j = ei; i < j; i++,j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
}
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int n = 7;
    int k;
    printf("Enter the rotation of element : \n");
    scanf("%d",&k);
    k = k%n;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    for (int i = 0; i < 7; i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}