#include<stdio.h>
int main(){
    int sp,cp;
    printf("Enter cost price :-");
    scanf("%d",&cp);
    printf("Enter selling price :-");
    scanf("%d",&sp);
    if (sp>cp)
    {
        printf("Profit");

    }
    /*else{
        printf("Loos");
    }
    */
   if (cp>sp)
   {
     printf("Loos");
   }
   if (cp==sp)
   {
     printf(" NO loss NO profit");
   }
   
   
    
}