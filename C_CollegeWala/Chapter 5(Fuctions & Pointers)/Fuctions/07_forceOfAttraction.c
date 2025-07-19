#include <stdio.h>
float force(float m);
float force(float m){
    float f = 9.8*m;
    return f;
}

int main(){
    float m;
    printf("Enter mass of Body : ");
    scanf("%f",&m);
    printf("Thee force of attraction on a body is %.2f",force(m)); 
    return 0;
}