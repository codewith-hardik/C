#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee e1;
    struct employee *ptr;
    ptr = &e1;
    strcpy(e1.name,"hardik");
    // printf("%s",(*ptr).name);
    printf("%s",ptr->name);
    return 0;
}