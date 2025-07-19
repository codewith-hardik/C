#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the cordinate :");
    // scanf("%d",&x);
    // scanf("%d",&y);
    scanf("%d %d",&x,&y);

    if (x==0 && y==0)
    {
        printf("The point on Oringen");
    }
    else if (x==0)
    {
        printf("The point on y-axis");
    }
    else if (y==0)
    {
       printf("The point on x-axis"); 
    }
    else{
        printf("The point NO on y or x axis");
    }
    
}