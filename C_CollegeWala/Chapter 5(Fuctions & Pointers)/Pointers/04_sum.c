#include <stdio.h>
int sum(int*,int*);
int sum(int*a,int*b){
    return *a + *b;
}
int main(){
    int a=5,b=10;
    printf("Sum of %d & %d is : %d.",a,b,sum(&a,&b));
    return 0;
}