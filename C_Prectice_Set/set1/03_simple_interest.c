// Write a C program to calculate simple interest (i = (p*r*n)/100)
//  i = Simple interest, p = Principal amount
//  r = Rate of interest, n = Number of years 

#include <stdio.h>
int main(){
    float p,r,t,i;
    printf("Enter Principal amount : \n");
    scanf("%f",&p);
    printf("Enter rate of Interest : \n");
    scanf("%f",&r);
    printf("Enter time in years : \n");
    scanf("%f",&t);
    i = (p*r*t)/100.0;
    printf("Simple Interest = %.2f\n",i);

}