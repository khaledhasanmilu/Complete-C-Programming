/*
Program that will construct a menu for performing arithmetic operations. 
The user will give two real numbers (a, b) on which the arithmetic 
operations will be performed and an integer number (1 <= Choice <= 4) as a choice.
 Choice-1, 2, 3, 4 are for performing addition, subtraction, multiplication, division (quotient) respectively.
*/
#include <stdio.h>
int main()
{
    double num1, num2;
    int choice,result;
    printf("Enter two value for calculation: ");
    scanf("%lf %lf", &num1, &num2);
    printf("-----------Calculator------------\n");
    printf("1.Addition.\n2.Substraction.\n3.Multiplication.\n4.Division(quotient).\n");
    printf("Choose any Choice(1-4) for performed: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("Your Adition Value: %.2lf.\n", num1 + num2);
        break;
    case 2:
        printf("Your Substraction Value: %.2lf.\n", num1 - num2);
        break;
    case 3:
        printf("Your Multiplication Value: %.2lf.\n", num1 * num2);
        break;
    case 4:
        if (num2 != 0)
        {
          int result = num1 / num2;
        }
        else
        {
            printf("Division by Zero is invalid.\n");
            return 1;
        }
        break;
    default:
        printf("Invalid Task!\n");
        break;
    }
    printf("Your division(quotient) value: %d\n",result);
    return 0;
}