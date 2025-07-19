#include<stdio.h>
int maze(int cr,int cc,int er,int ec){  // cr=> curant rows,cc=>curant columns ,er=>ending rows,ec=>ending columns
    int rigthways = 0;
    int downways = 0;
    if(cr==er && cc==ec) return 1;
    if(cr==er){  // only righways call
        rigthways += maze(cr,cc+1,er,ec);
    }
    if(cc==ec){  // only downways call
       downways += maze(cr+1,cc,er,ec);
    }
    if (cr<er && cc<ec)
    {
        rigthways += maze(cr,cc+1,er,ec);
        downways += maze(cr+1,cc,er,ec);
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
    
    int Ways = maze(1,1,n,m);
    printf(" Number Of Ways is  :- %d",Ways); 
    return 0;
}