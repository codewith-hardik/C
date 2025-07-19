#include <stdio.h>

int main(){
    int y;
    printf("Enter a year : ");
    scanf("%d",&y);
    if (y%4==0)
    {
        printf("%d is Leap Year.",y);
    }else{
        printf("%d is not Leap Year.",y);
    }
    return 0;
}