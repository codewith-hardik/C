#include <stdio.h>

int main(){
    char ch ;
    printf("Enter an character : ");
    scanf("%c",&ch);
    int CharInInt = ch; 
    if (CharInInt>=65 && CharInInt<=90)
    {
        printf("%c is in UpperCase Character.",ch);
    }else if (CharInInt>=97 && CharInInt<=122)
    {
        printf("%c is in LowerCase Character.",ch);
    }else{
        printf("This is not a Character.");
    }    
    return 0;
}