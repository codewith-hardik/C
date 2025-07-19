#include <stdio.h>

int main(){
    int n;
    printf("Enter row : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int odd = 1;
        for (int j = 1; j <= i; j++)
        {
            printf("%d",odd); 
            odd+=2;
        }
        printf("\n");
    }
    
    return 0;
}