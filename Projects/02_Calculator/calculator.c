// This is a simple calculator program
// by @hardik




#include <stdio.h>

void print_manu();

int main()
{

    int choice;
    double firstNum, secondNum, result;

    while (1)
    {

        print_manu();
        printf("\nEnter your choice: ");
        scanf("%d", &choice);


        if (choice == 7)
        {
            printf("Exiting the calculator. Goodbye!\n");
            break;
        }else if (choice < 1 || choice > 7)
        {
            printf("Invalid choice. Please try again.\n");
            continue;
        }else if (choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6)
        {
            printf("Enter first number: ");
            scanf("%lf", &firstNum);
            printf("Enter second number: ");
            scanf("%lf", &secondNum);
        }



        switch (choice)
        {
        case 1:
            result = firstNum + secondNum;
            break;
        case 2:
            result = firstNum - secondNum;
            break;
        case 3:
            result = firstNum * secondNum;
            break;
        case 4:
            if (secondNum != 0)
            {
                result = firstNum / secondNum;
            }
            else
            {
                printf("Error: Division by zero is not allowed.\n");
                continue;
            }
            break;  
        case 5:
            if ((int)firstNum == firstNum && (int)secondNum == secondNum)
            {
                result = (int)firstNum % (int)secondNum;
            }
            else
            {
                printf("Error: Modulus operation is only valid for integers.\n");
                continue;
            }
            break;
        case 6:
            result = 1;
            for (int i = 0; i < secondNum; i++)
            {
                result *= firstNum;
            }
            break;
        }


        printf("Result: %.2f\n", result);
    }

    return 0;
}

void print_manu()
{
    printf("\n-----------------------\n");
    printf("Welcome to the Simple Calculator!\n");
    printf("Please select an operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");
    printf("6. Power\n");
    printf("7. Exit\n");
}
