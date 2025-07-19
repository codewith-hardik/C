#include <stdio.h>

float Ctof(float c);
float Ctof(float c){
    float f = 1.8*c + 32;
    return f;
}
int main(){
    float c;
    printf("Enter Temprature in Celsius : ");
    scanf("%f",&c);
    printf("Temprature in Feranheat is : %.2f",Ctof(c));
    return 0;
}

