#include <stdio.h>
#include <string.h>

typedef struct vector
{
    int i;
    int j;
    int k;
} V;
V sumVector(V v1, V v2){
    V v3 = {v1.i + v2.i, v1.j + v2.j , v1.k + v2.k};
    return v3; 
}


int main(){
    V v1 = {1,2,3};
    V v2 = {1,2,3};
    V v3 = sumVector(v1,v2);

    printf("sum of two vector is %di + %dj + %dk.\n",v3.i,v3.j,v3.k);
    
    return 0;
}