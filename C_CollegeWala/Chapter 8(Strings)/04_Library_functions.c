#include <stdio.h>
#include <string.h>
int main(){
    char str[10] = "hardik";
    printf("Number of characters : %d\n",strlen(str));

    char str2[10] = "Nenshi";
    char target[10];
    strcpy(target,str2);
    printf("Copy of strings : %s\n",str2);

     
    printf("%d\n",strcmp("deep","joke"));// negative value (-1)
    printf("%d\n",strcmp("joke","deep"));// positive value (1)

    
    return 0;
}