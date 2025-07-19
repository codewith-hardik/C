#include <stdio.h>
void display();
void good_morning();
void good_afternoon();
void good_nigth();

void display(){
    printf("Hello Wrold!!!\n");
}
void good_morning(){
    printf("Good Morning\n");
}
void good_afternoon(){
    printf("Good Afternoon\n");
}
void good_nigth(){
    printf("Good Nigth\n");
}
int main(){
    display();
    good_morning();
    good_afternoon();
    good_nigth();
    return 0;
}