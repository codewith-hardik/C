#include <stdio.h>

int main(){
    FILE* ptr;
    FILE* ptr2;
    ptr = fopen("06_two_read_write.txt","r");
    ptr2 = fopen("06_two_read_write2.txt","a");
    char ch;
    while (1)
    {
        ch = fgetc(ptr);
        if (ch == EOF)
        {
            break;
        }else{
            fprintf(ptr2,"%c",ch);
            fprintf(ptr2,"%c",ch);
            printf("%c\n",ch);
        }
        
    }

    return 0;
}