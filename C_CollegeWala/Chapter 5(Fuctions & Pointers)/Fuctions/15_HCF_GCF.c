#include<stdio.h>
int min(int a,int b){
    if (a>b)
    {
        return b;
    }
    return a;
}
int main(){
    int n1,n2;
    printf("Enter 1st : ");
    scanf("%d", &n1);
    int r;
    printf("Enter 2nd : ");
    scanf("%d", &n2);
    int hcf = 0;
    for (int i = min(n1,n2); i>=1; i--)
    {
        if (n1%i==0 && n2%i==0)
        {
            hcf = i;
            break;
        }
        
    }
            printf("HCF/GCF is : %d",hcf);
    
    return 0;
}