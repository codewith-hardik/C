#include <stdio.h>
#include <string.h>
int main(){
    char c = 'a';
    int count = 0;
    char str[] = "Hardik chavda";
    for (int i = 0; i < strlen(str); i++)
    {
        if(str[i] == c){
            count++;
        }
    }
    printf("%d",count); // a -> reapete in str of 3 times...
    return 0;
}