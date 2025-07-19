#include <stdio.h>
#include <string.h>
int main(){
    char ch = 'z';
    char str[] = "hardik chavda";
    int isContain = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==ch)
        {
            isContain = 1;
            break;
        }
        
    }
    if (isContain==1)
    {
        printf("Yes, The character is present.");
    }else if(isContain==0){
        printf("No, The character is not present.\n");
    }    
    return 0;
}