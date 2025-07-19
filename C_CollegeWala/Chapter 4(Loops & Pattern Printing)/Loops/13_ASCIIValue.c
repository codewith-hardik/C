#include<stdio.h>
int main(){

    // what is typecasting ==>>
    // int x = 1;
    // printf("%d\n",x);
    // char ch = (char)x;
    // printf("%c",ch);
     
    int i=65;
    while (i<91)
    {
        char ch = (char)i;
        printf("%d -> %c \n",i,ch);
        i++;
    }
    
}