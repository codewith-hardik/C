#include <stdio.h>

int main(){
    int n;
    printf("Enter row : ");
    scanf("%d",&n);
    int a = n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= a; j++)  // j+i = n+1 -> j= n+1-i
        {
            printf("*"); 
        }
        // a-=1;
        printf("\n");
    }
    
    return 0;
}