#include <stdio.h>

int main(){
    int p,q,r,s;
    printf("Enter 1st number : ");
    scanf("%d",&p);
    printf("Enter 2nd number : ");
    scanf("%d",&q);
    printf("Enter 3rd number : ");
    scanf("%d",&r);
    printf("Enter 4th number : ");
    scanf("%d",&s);
    if (p>q && p>r && p>s)
    {
        printf("%d is Greatest.",p);
    }else if (q>p && q>r && q>s)
    {
        printf("%d is Greatest.",q);
    }else if (r>q && r>p && r>s)
    {
        printf("%d is Greatest.",r);
    }else{
        printf("%d is Greatest.",s);
    }
    
    return 0;
}