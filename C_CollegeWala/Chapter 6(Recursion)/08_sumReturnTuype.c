#include<stdio.h>
int sum(int n){
    if(n==1) return 1;
    int s = n + sum(n-1);
    return s;
}
int main(){
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    int s = sum(n);
    printf("SUM is :-%d",s);
    return 0;
}