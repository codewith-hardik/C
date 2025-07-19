#include<stdio.h>
int main(){
             //GP => An = a*r^(n-1)

    int n,a,r;
    printf("Enter turm number:-");
    scanf("%d",&n);
    printf("Enter first turm:-");
    scanf("%d",&a);
    printf("Enter turm Retio :-");
    scanf("%d",&r);
    for (int i = 1; i <= n; i++)
    {
        printf("%d \n",a);
        a=a*r;
    }
    
}