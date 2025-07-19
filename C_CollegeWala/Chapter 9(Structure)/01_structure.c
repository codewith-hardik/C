#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee e1,e2;
    e1.code = 100;
    strcpy(e1.name,"Hardik");
    e1.salary = 100000000;
    printf("%s %d %0.2f",e1.name,e1.code,e1.salary);
    return 0;
}


