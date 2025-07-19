#include <stdio.h>

int main(){
    int r;
    printf("Enter redius of circle :");
    scanf("%d",&r);
    float area = 3.14*r*r;
    printf("Area of Circle is %f\n",area);
    int h;
    printf("Enter Height of cylinder : ");
    scanf("%d",&h);
    float volume = area*h;
    printf("Volume of Cylinder is %f",volume);
    return 0;
}