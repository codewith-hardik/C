#include<stdio.h>
int fectorial(int n){
    int f = 1;
    for (int i = 1; i <= n; i++)
    {
        f = f*i;
    }
    return f;    
}
int combination(int n, int r){
    int n_fecto = fectorial(n);
    int r_fecto = fectorial(r);
    int n_r_fecto = fectorial(n-r);
    int combi = n_fecto/(r_fecto*n_r_fecto);
    return combi;
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++)
    {
        for (int k = 0; k <= n-i; k++)
        {
            printf(" ");
        }
        
        for (int j = 0; j <= i; j++)
        {
            printf("%d ",combination(i,j));
        }
        printf("\n");
    }
    return 0;
}