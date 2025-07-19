#include <stdio.h>

int main(){
    FILE* ptr;
    // ptr = fopen("03_fget_fput.txt","w");
    // fputc('h',ptr);

    ptr = fopen("03_fget_fput.txt","r");
    char ch = fgetc(ptr);
    printf("%c\n",ch);
    return 0;
}