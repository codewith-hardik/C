#include <stdio.h>

int main(){
    int i;  // income
    float tax; 
    printf("Enter Your Income : ");
    scanf("%d",&i);
    if (i>250000 && i<500000)
    {
        tax = 0.05;
    }else if (i>500000 && i<1000000)
    {
        tax = 0.2;
    }else if (i>1000000)
    {   
        tax = 0.3;
    }else{
        tax = 0;
    }
    int paid = tax*i; 
    printf("Paid Tax is : %d",paid);    
    return 0;
}