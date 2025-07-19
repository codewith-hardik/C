// Method  1;

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number :-");
    scanf("%d",&n);
    int sum = 0;
    for (int i = 1; i <= n ; i++)
    {
        if(i%2!=0)  sum = sum + i;
        else  sum = sum - i;
        
    }

    // sires => 1-2+3-4+5-6+7.....
    // odd => add(+)
    // even => subtrict(-)
    printf("Sum of Seires :- %d",sum);
    
}


// Method 2;

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number :-");
//     scanf("%d",&n);
//     int sum = 0;
//         if (n%2==0)
//     {
//         sum = -n/2;
//     }
//     else{
//         sum = -n/2 + n;
//     }
    
//      printf("Sum of Seires :- %d",sum);
// }