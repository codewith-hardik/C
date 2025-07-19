#include <stdio.h>

int main(){
    FILE* ptr;
    // ptr = fopen("04_read_chBych.txt","w");
    // fputc('h',ptr);

    ptr = fopen("04_read_chBych.txt","r");
    char ch;
    while (1)
    {
        ch = fgetc(ptr);
         printf("%c",ch);
        if (ch == EOF)
        {
            break;
        }
       
    }
    
    return 0;
}