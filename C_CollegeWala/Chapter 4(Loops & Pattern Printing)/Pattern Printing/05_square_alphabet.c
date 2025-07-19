#include <stdio.h>

int main(){
    int n;
    printf("Enter row : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int A = 65;
        for (int j = 1; j <= n; j++)  // n change -> i (Triangle)
        {
          
            printf("%c ",(char)A);
            A++; 
        }
        printf("\n");
    }
    
    return 0;
}