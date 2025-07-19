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
    
    printf("Enter your name : \n");
    scanf("%s",&e1.name);
    printf("Enter Your Code : \n");
    scanf("%d",&e1.code);
    printf("Enter Your Salary : \n");
    scanf("%f",&e1.salary);

     printf("%s %d %0.2f",e1.name,e1.code,e1.salary);

    return 0;
}