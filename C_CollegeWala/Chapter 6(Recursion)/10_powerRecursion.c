#include<stdio.h>
int power(int a,int b){
    if(b==0)  return 1;
    int recAns = a*power(a,b-1);
    return recAns; 
}
int main(){
    int a;
    printf("Enter Base :- ");
    scanf("%d",&a);
     int b;
    printf("Enter Power/Exponsial :- ");
    scanf("%d",&b);
    
    int recAns = power(a,b);
    printf("%d raised to the power %d is :- %d",a,b,recAns); 
    return 0;
}