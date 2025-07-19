#include <stdio.h>

int main(){
    int i = 8;
    int* j = &i;
    int** k = &j;
    int*** l = &k;
    // addresses....
    printf("address of i = %u\n",&i);
    printf("address of i = %u\n",j);
    printf("address of j = %u\n",&j);
    printf("address of j = %u\n",k);
    printf("address of k = %u\n",&k);
    printf("address of k = %u\n",l);
    // values....
    printf("Value of i = %d\n",i);
    printf("Value of i = %d\n",*j);
    printf("Value of i = %d\n",*(&i));
    printf("Value of j = %d\n",j);
    printf("Value of j = %d\n",*k);
    printf("Value of j = %d\n",*(&j));
    printf("Value of k = %d\n",k);
    printf("Value of k = %d\n",*(&k));
    printf("Value of k = %d\n",*l);
    return 0;
}