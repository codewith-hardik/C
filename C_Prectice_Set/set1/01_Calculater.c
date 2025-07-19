// Write a C program that performs as calculator (addition, multiplication,
//     division, subtraction) 

#include<stdio.h>
int main(){
    
    double n1,n2,r;
    char op;
    printf("Enter first number: ");
    scanf("%lf",&n1);
    printf("Enter Operator(+,-,*,/): ");
    scanf(" %c",&op);
    printf("Enter second Number: ");
    scanf("%lf",&n2);
    switch (op)
    {
    case '+':
        r = n1 + n2;
        break;
    case '-':
        r = n1 - n2;
        break;
    case '*':
        r = n1 * n2;
        break;    
    case '/':
        r = n1 / n2;
        break;
    default:
        printf("Error: invalid Operator.\n");
        break;
    }
    printf("%.2lf %c %.2lf = %.2lf\n",n1,op,n2,r);
}
