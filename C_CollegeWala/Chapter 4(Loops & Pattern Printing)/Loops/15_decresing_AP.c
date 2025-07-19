#include<stdio.h>
int main(){
    
    int n,a,d;
    printf("Enter turm number:-");
    scanf("%d",&n);
    printf("Enter first turm:-");
    scanf("%d",&a);
    printf("Enter turm differant:-");
    scanf("%d",&d);
    // for (int i = 1; a>0 ; i++)   // Positev Only
    // {
    //     printf("%d \n",a);
    //     a=a-d;
    // }
    while (a>0)
    {
        printf("%d \n",a);
        a= a-d;
    }
    

}