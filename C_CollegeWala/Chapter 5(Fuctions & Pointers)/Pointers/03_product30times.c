#include <stdio.h>
void product_30_times (int*);
void product_30_times(int* x){
    *x =  (*x) * 30; 
}
int main(){
    int a = 30;
    printf("Value of a is %d \n",a);
    product_30_times(&a);
    printf("vlaue of a is %d ",a);

    return 0;
}