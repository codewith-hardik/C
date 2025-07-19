#include <stdio.h>

int main(){
    float c;
    printf("Enter temperature in celsius : ");
    scanf("%f",&c);
    float f = (1.8)*c + 32;
    printf("In Fahrenheit is %f *F",f);

    return 0;
}