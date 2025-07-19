#include <stdio.h>
float avg(int,int,int);
float avg(int a,int b, int c){
    return (a+b+c)/3.0;
}

int main(){
    int x,y,z;
    x=2,y=2,z=2;
    printf("Avrage of three number is %.2f",avg(x,y,z));
    return 0;
}