#include<stdio.h>
int powerlog(int a,int b){
    if(b==0)  return 1;
    int x = powerlog(a,b/2);
    if(b%2==0)  return x*x;
    if(b%2!=0)  return x*x*a;
    
}
int main(){
    int a;
    printf("Enter Base :- ");
    scanf("%d",&a);
     int b;
    printf("Enter Power/Exponsial :- ");
    scanf("%d",&b);
    
    int recAns = powerlog(a,b);
    printf("%d raised to the power %d is :- %d",a,b,recAns); 
    return 0;
}