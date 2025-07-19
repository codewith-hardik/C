#include<stdio.h>
int main(){
    int n;
    printf("Enter Number:-");
    scanf("%d",&n);
    // if (n<1000 && n>99)
    // printf("There Digeat Number");
    // else
    // printf("Not There Digeat Number");
    
    n<1000 && n>99 ? printf("There Digeat Number\n") : printf("Not There Digeat Number\n");
    n<10000 && n>999 ? printf("four Digeat Number\n") : printf("Not four Digeat Number\n");


    
}