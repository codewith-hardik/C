#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
} emp;


int main(){

    typedef int hardik;
    hardik h = 100;
    printf("Value of typedef is : %d\n",h);
   emp e1;
   e1.code = 21;
   e1.salary = 2000000;
   strcpy(e1.name,"Hardik");
   printf("%s %d %f\n",e1.name,e1.code,e1.salary);
    return 0;
}