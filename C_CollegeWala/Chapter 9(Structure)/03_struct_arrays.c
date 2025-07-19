#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[10];
};


int main(){
    struct employee facebook[100];
    strcpy(facebook[0].name,"Dharmik");
    strcpy(facebook[1].name,"Hardik");    

     printf("%s\n",facebook[0].name);
     printf("%s\n",facebook[1].name);

    return 0;
}