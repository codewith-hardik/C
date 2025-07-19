#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("07_employee.txt","w");
    char name1[30],name2[30];
    int salary1,salary2;
    
    printf("Enter Name of Employee 1 : \n");
    scanf("%s",name1);

    printf("Enter name of Employee 2 : \n");
    scanf("%s",name2);

    printf("Enter salary of Employee 1 : ");
    scanf("%d",&salary1);

    printf("Enter salary of Employee 2 : ");
    scanf("%d",&salary2);
    
    fprintf(ptr,"%s",name1);
    fprintf(ptr,"%c",',');
    fprintf(ptr,"%d",salary1);
    fprintf(ptr,"%c",'\n');
    fprintf(ptr,"%s",name2);
    fprintf(ptr,"%c",',');
    fprintf(ptr,"%d",salary2);

    return 0;
}