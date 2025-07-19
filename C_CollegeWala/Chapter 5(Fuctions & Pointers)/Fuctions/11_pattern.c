#include <stdio.h>

int pattern(int i);
int pattern(int i){
    return printf("*");
}
int main(){
    int n;
    printf("Enter line of pattern is : ");
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        for (int j = 0; j < 2*i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return 0;
}