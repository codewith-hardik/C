#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("05_table.txt","w");
    int num = 4;
    for (int i = 0; i < 10; i++)
    {
        fprintf(ptr,"%d X %d = %d",num,(i+1),num*(i+1));
        fprintf(ptr,"%c",'\n');
    }
    
    return 0;
}