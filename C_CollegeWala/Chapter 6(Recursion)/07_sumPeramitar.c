#include<stdio.h>
void sum(int n , int s){
    if (n==0)
    {
        printf("sum :- %d",s);
    }
    
    sum(n-1,s+n);
}
int main(){
    int n;
    printf("Enter a number :- ");
    scanf("%d",&n);
    sum(n,0);
    return 0;
}