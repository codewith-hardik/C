#include<stdio.h>  // ==> you can use stape 1,2 or 3 only;
int stair(int n){
    if(n<=3)   return n;
    return stair(n-1) + stair(n-2) + stair(n-3);
}
int main(){
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);

    int ways = stair(n);
    printf("Stair Path Ways is :- %d",ways);
    return 0;
}