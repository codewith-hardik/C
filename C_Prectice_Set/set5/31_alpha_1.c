// Right-Angled Triangle (Increasing Alphabets)

// A  
// A B  
// A B C  
// A B C D  
// A B C D E
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++)
    {
        char ch = 'A';
    for (int j = 1; j <= i; j++)
    {
        printf("%c ",ch);
        ch++;
    }
    printf("\n");
   }
   
    return 0;
}
