#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:-");
    scanf("%d",&n);
    /*if (n%5==0 && n%3==0)
    {
        printf("Divisible by 5 & 3 ");

    }
    else{
        printf("Not Divisible by 5 & 3");
    }
    */
   if (n%5==0 || n%3==0)
   {
    printf("Divisible by 5 0r 3 ");
   }
   else{
    printf("Not Divisible by 5 or3");
   }
   
    
}