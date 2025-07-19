#include <stdio.h>

int main(){
    int n;
    printf("Enter row : ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        int A = 65;
        for (int j = 1; j <= i; j++)  // n change(square) -> i (Triangle)
        {
          if(i%2==0){
            printf("%c ",(char)A);
            A++; 
          }else{
            printf("%d ",j);
          }
            
        }
        printf("\n");
    }
    
    return 0;
}