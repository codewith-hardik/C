#include <stdio.h>

int main(){
    FILE* ptr;
    // ptr = fopen("02_Write.txt","w"); -> only write 
    ptr = fopen("02_Write.txt","a"); // -> write & add any txt

    int num = 1234 ;
    fprintf(ptr,"%d ",num);
    fclose(ptr);
    return 0;
}