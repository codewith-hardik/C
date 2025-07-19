#include <stdio.h>

int main(){
    int n;
    printf("Enter row : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int r = i;
        for (int l = 1; l <= n-i; l++)  // spaces....
        {
            printf(" ");
        }
        
        for (int j = 1; j <= i; j++) // normal number
        {
            printf("%d",j); 
        }
        for (int k = 1; k <= i-1; k++) // reverse number
        {
            printf("%d",r-1);
            r--;
        }
        
        printf("\n");
    }
    
    return 0;
}