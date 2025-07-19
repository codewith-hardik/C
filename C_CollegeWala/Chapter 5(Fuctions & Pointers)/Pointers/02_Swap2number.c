#include <stdio.h>
void swap(int*,int*);
void swap(int* x,int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a=3,b=4;
    printf("a = %d & b = %d \n",a,b);
    swap(&a,&b);
    printf("a = %d & b = %d",a,b);
    return 0;
}