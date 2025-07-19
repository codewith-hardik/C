#include <stdio.h>
float avg(int*,int*,int*);
float avg(int*a,int*b,int*c){
    return (*a+*b+*c)/3.0;
}
int main(){
    int a=3,b=3,c=3;
    printf("avrage of three number is : %.2f",avg(&a,&b,&c));
    return 0;
}