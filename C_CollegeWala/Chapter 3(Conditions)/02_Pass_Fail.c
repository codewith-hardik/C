#include <stdio.h>

int main(){
    int m1,m2,m3,m4,m5;
    printf("Enter Your Marks of five subject(out of 100)");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    float persntage = (m1 + m2 + m3 + m4 + m5)/5;
    if (persntage>33)
    {
        printf("You are Pass!!!");
    }else if (persntage<33)
    {
        printf("You are Fail!!!");
    }
    
    
    return 0;
}