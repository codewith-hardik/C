#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length :-");
    scanf("%d",&l);
    printf("Enter width :-");
    scanf("%d",&b);
    int a = l * b;
    int p = 2 * (l+b);
    if (a>p)
    {
        printf("Area is greater than Perimeter");
    }
    else{
        printf("Perimeter is greater than Area");
    }
}