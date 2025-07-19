#include<stdio.h>
int maze(int n ,int m){
    int rigthways = 0;
    int downways = 0;
    if (n==1 && m==1)   return 1;
    if (n==1)
    {
        rigthways += maze(n,m-1);
    }
    if (m==1)
    {
        downways += maze(n-1,m);
    }
    if (n>1 && m>1)
    {
        rigthways += maze(n,m-1);
        downways += maze(n-1,m);
    }        
    int Ways = downways + rigthways;
    return Ways;
}
int main(){
    int n;
    printf("Enter Rows :- ");
    scanf("%d",&n);
     int m;
    printf("Enter columns :- ");
    scanf("%d",&m);
    
    int Ways = maze(n,m);
    printf(" Number Of Ways is  :- %d",Ways); 
    return 0;
}