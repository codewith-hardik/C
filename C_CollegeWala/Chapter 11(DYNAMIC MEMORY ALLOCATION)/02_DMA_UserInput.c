#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    printf("Enter element of an arrays : ");
    scanf("%d",&n);
    int* arr; // int* ptr;
    arr = (int*) malloc(n * sizeof(int));
    printf("Enter element of an arrays : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n",&arr[i]);
    }
    printf("The value of an arrays : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n",arr[i]);
    }
    return 0;
}