#include <stdio.h>

int main(){
    int marks[5] ={90,98,95,85,87};
    int* ptr = &marks[0];
    // int* ptr = marks;
    for (int i = 0; i < 5; i++)
    {
        // printf("marks of %d student is %d \n",i+1,marks[i]);
        printf("marks of %d student is %d\n",i+1,*ptr);
        ptr++;
    }
    
    

    return 0;
}