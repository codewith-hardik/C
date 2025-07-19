#include <stdio.h>
#include <string.h>

typedef struct students
{
    int enrollNo;
    char name[20];
    char dpt[30]; // depatment
    char course[20];
    int joinYear;
} student;

void chack(student s1,student s2){
    if (strcmp(s1.dpt,s2.dpt) == 0)
    {
        printf("Same Department.\n");
    }else{
        printf("Different Departments.\n");
    }
    
}

int main()
{
    student s1, s2;
    s1.enrollNo = 19;
    s2.enrollNo = 14;

    strcpy(s1.name, "Hardik");
    strcpy(s2.name, "Ankit");

    strcpy(s1.dpt, "Computer");
    strcpy(s2.dpt, "Computer");

    strcpy(s1.course, "AI");
    strcpy(s2.course, "Java");

    
    s1.joinYear = 2024;
    s2.joinYear = 2024;

    chack(s1,s2);
    return 0;
}