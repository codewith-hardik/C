#include <stdio.h>

int main(){
    int r,si,t,p;
    printf("Enter Principale amount : ");
    scanf("%d",&p);
    printf("Enter Rate of interest per annum : ");
    scanf("%d",&r);
    printf("Enter time period in years : ");
    scanf("%d",&t);
    si = p*r*t*0.01;
    printf("Simple interest is : %d",si);
    return 0;
}