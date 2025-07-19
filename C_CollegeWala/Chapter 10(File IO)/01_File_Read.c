#include <stdio.h>

int main(){
    FILE* ptr;
    ptr = fopen("01_Read.txt","r");
    if (ptr == NULL)
    {
        printf("The File dose not Exist. \n");
    }else{    
    int num;
    fscanf(ptr,"%d",&num);
    printf("The value of num is : %d\n",num);
    fscanf(ptr,"%d",&num);
    printf("The value of num is : %d\n",num);
    }
    fclose(ptr);
    return 0;
}