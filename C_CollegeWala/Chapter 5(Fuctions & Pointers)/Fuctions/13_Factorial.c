#include<stdio.h>
int fectorial(int n){
    int f = 1;
    for(int i = 1; i <= n; i++){
        f = f * i;
    }
    return f;
}
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d", &n);
    printf("fectoria of %d is %d\n",n,fectorial(n));
    return 0;
}