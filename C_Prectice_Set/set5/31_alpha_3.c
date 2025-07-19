// A B C D E  
// A B C D  
// A B C  
// A B  
// A

#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++)
    {
        char ch = 'A';
    for (int j = 1; j<=5-i+1; j++)
    {
        printf("%c ",ch);
        ch++;
    }
    printf("\n");
   }
   
    return 0;
}
