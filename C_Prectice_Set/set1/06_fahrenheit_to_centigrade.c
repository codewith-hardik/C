// Write a C program to compute Fahrenheit from centigrade (f=1.8*c +32)

#include <stdio.h>
int main(){
    float c,f;
    printf("Enter temperature in celsius : \n");
    scanf("%f",&c);
    f = 1.8 * c + 32;
    printf("temperature in fahrenheit = %.2fF\n",f);
    
}