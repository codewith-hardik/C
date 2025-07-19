#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    printf("Enter element of arry : ");
    scanf("%d",&n);
    // int arr[n]; // Not alowd...
    int* arr;
    // arr = (int*) malloc(n* sizeof(int));
    arr = (int*) calloc(n, sizeof(int));
    arr[0] = 10;
    arr[1] = 11;
    arr[2] = 12;
    arr[3] = 13;
    arr[4] = 14;
    arr[5] = 15;
    printf("%d\n",arr[0]);
    printf("%d\n",arr[1]);
    printf("%d\n",arr[2]);
    printf("%d\n",arr[3]);
    printf("%d\n",arr[4]);
    printf("%d",arr[5]);
    free(arr);
    return 0;
}