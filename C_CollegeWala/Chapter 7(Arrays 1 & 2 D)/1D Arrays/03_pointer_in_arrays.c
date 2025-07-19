#include <stdio.h>

int main(){
    // int a = 5;
    // int* ptr = &a;
    // printf("The address of a is %u\n",&a);
    // printf("The address of a is %u\n",ptr);
    // ptr++;
    // printf("The value of ptr is %u\n",ptr);

   
    // char a = 'a';
    // char* ptr = &a;
    // printf("The address of a is %u\n",&a);
    // printf("The address of a is %u\n",ptr);
    // ptr++;
    // printf("The value of ptr is %u\n",ptr);

    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int* ptr = arr;
    printf("The value at %u address is %d ",ptr+2,*ptr+2);
    return 0;
}
