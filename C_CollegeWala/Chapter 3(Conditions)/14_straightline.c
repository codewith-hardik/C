#include<stdio.h>
int main(){
    int x1,x2,x3,y1,y2,y3;
    printf("Enter x1 :-");
    scanf("%d",&x1);
    printf("Enter x2 :-");
    scanf("%d",&x2);
    printf("Enter x3 :-");
    scanf("%d",&x3);
    printf("Enter y1 :-");
    scanf("%d",&y1);
    printf("Enter y2 :-");
    scanf("%d",&y2);
    printf("Enter y3 :-");
    scanf("%d",&y3);

    float m1 =(float) (y2-y1)/(x2-x1);
    float m2 = (float) (y3-y2)/(x3-x2);

    if (m1==m2)
    {
        printf("Three point on one straight line");
    }
    else{
        printf("Three point  NO on one straight line");
    }
}
