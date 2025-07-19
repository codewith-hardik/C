#include<stdio.h>
int main(){
    int a,b;
    
    printf("Enter 1st NO:-");
    scanf("%d",&a);
    printf("Enter 2nd No:-");
    scanf("%d",&b);
    int q = a / b;
    int r = a - (b*q);
    int reminder = a%b;

    printf("Reminder is :- %d",reminder);

}