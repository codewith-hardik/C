#include <stdio.h>

int main(){
    int marks[5];
    // int marks[5] {99,87,90,95,85}; another way to init the arrays...
    printf("Enter marks of 5 student : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter marks %d student : \n",i+1);
        scanf("%d",&marks[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        // printf("Marks of  %d student is  : %d\n",i+1,marks[i]);
        if (marks[i]<35)
        {
            printf("%d \n",i);
        }
        
    }
    
    return 0;
}