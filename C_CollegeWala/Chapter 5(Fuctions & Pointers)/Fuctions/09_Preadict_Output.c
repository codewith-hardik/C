#include <stdio.h>

int main(){
    int a = 4;
    printf("%d %d %d ",a,++a,a++);
    // 6 6 4 -> Evaluation order of Compiler is rigth to left;
    // 4 5 5 -> Evaluation order of Compiler is left to right;
    
    return 0;
}