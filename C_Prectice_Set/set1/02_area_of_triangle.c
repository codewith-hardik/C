// 2 Write a C program to find area of triangle (a=h*b*0.5), a = area, h = height, b = base 
#include<stdio.h>
int main(){
    float b,h,a;
    printf("Enter base of triangle: \n");
    scanf("%f",&b);
    printf("Enter Height of triangle: \n");
    scanf("%f",&h);
    
    a = 0.5 * b * h;
    printf("Area of the triangle = %.2f\n",a);
}