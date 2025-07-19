#include<stdio.h>
int main(){
    // int n,d;
    // printf("Enter Turm number :");
    // scanf("%d",&n);
    // printf("Enter turm Differant :");
    // scanf("%d",&d);

    // for ( int i=1;i<=n;i=i+d)   
    // {
    //     printf("%d ",i);
    // }
    

    int n,a,d;
    printf("Enter turm number:-");
    scanf("%d",&n);
    printf("Enter first turm:-");
    scanf("%d",&a);
    printf("Enter turm differant:-");
    scanf("%d",&d);
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n",a);
        a=a+d;
    }
    
}