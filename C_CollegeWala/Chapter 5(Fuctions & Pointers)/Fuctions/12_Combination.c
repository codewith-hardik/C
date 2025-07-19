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
    printf("Enter n : ");
    scanf("%d", &n);
    int r;
    printf("Enter r : ");
    scanf("%d", &r);
    printf("Combination is : %d\n",combination(n,r));

    return 0;
}