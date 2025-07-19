#include <stdio.h>
typedef struct Date
{
    int dd;
    int mm;
    int yyyy;
} DT;   

int compar(DT d1,DT d2){
    if ((d1.dd == d2.dd)&&(d1.mm == d2.mm) && (d1.yyyy == d2.yyyy))
    {
        return 0;
    }else if (d1.dd < d2.dd)
    {
        return -1;
    }else if (d1.dd > d2.dd)
    {
        return 1;
    }else if (d1.mm < d2.mm)
    {
        return -1;
    }else if (d1.mm > d2.mm)
    {
        return 1;
    }else if (d1.yyyy < d2.yyyy)
    {
        return -1;  
    }else if (d1.yyyy > d1.yyyy)
    {
        return 1;
    }
  
}
int main(){
    DT d1 = {13,11,2008};
    DT d2 = {12,11,2008};
    // d2 > d1 -> -1 
    // d1 > d2 -> 1
    printf("Compate date both Final Return : %d \n",compar(d1,d2));

    return 0;
}