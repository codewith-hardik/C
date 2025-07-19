#include <stdio.h>
#include <math.h>
int sum(int,int);
int sum(int a,int b){
    return a+b;
}
int main(){
    int x = 20;
    int y = 90;
    printf("sum of %d & %d is %d",x,y,sum(x,y));
    return 0;
}