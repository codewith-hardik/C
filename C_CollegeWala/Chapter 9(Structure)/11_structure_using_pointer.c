#include <stdio.h>
#include<string.h>

typedef struct person
{
    int age;
    float weigth;
} person;
void change(person* p){
    p->age = 20;
    p->weigth = 50.55;
    return;
}

int main(){
    person p1 ;
    p1.age = 17;
    p1.weigth = 45.555;  // kg
    person* ptr = &p1;
    

    printf("%d\n",p1.age);
    printf("%.1f\n",p1.weigth);
    printf("\n");
    change(&p1); // stuctue pass by reference...
    printf("%d\n",ptr->age);  // (*ptr).something === ptr->something
    printf("%.1f\n",(*ptr).weigth);

    return 0;
}