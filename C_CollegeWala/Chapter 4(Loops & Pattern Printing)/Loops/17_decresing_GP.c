#include<stdio.h>
int main(){
             //GP => An = a*r^(n-1)

    float n,a,r;
    printf("Enter turm number:-");
    scanf("%f",&n);
    printf("Enter first turm:-");
    scanf("%f",&a);
    printf("Enter turm Retio :-");
    scanf("%f",&r);
    for (int i = 1; a>1 ; i++) // Positev only
    {
        printf("%f \n",a);
        a=a*r;
    }
    
}
