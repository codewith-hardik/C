#include <stdio.h>

int mystrlen(char str[]){
    int i = 0;
    char c = str[i];
    while (c != '\0')
    {
        c = str[i];
        i++;
    }
    return i-1;    
}

void mystrcpy(char target[],char source[]){
    for (int i = 0; i < mystrlen(source); i++)
    {
        target[i] = source[i];
    }
    target[mystrlen(source)] = '\0';    
}
int main(){
    char source[] = "Hardik";
    char target[30];
    mystrcpy(target,source);
    printf(" %s %s ",source, target);
    return 0;
}