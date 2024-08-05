/*
Program that will construct a menu for performing arithmetic operations.
The user will give two real numbers (a, b) on which the arithmetic operations
will be performed and an integer number (1 <= Choice <= 4) as a choice.
Choice-1, 2, 3, 4 are for performing addition, subtraction, multiplication, division respectively.
If Choice-4 is selected, again the program will ask for another choice (1 <= Case <=2),
where Case-1, 2 evaluate quotient and remainder respectively
*/
#include <stdio.h>
#include<math.h>
int main()
{
    double num1, num2;
    int choice, choose, result;
    printf("Enter two value for calculation: ");
    scanf("%lf %lf", &num1, &num2);
    printf("-----------Calculator------------\n");
    printf("1.Addition.\n2.Substraction.\n3.Multiplication.\n4.Division(Quotient and Reminder).\n");
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
            printf("1.Quotient.\n2.Reminder.\n");
            printf("Choose one: ");
            scanf("%d", &choose);
            if (choose == 1)
            {
                result = num1 / num2;
                printf("Quotient: %d", result);
            }
            else if (choose == 2)
            {
                result = fmod(num1, num2);
                printf("Reminder: %d", result);
            }
            else
            {
                printf("Invalid case choice.\n");
            }
        }
        else
        {
            printf("Division by Zero is invalid.\n");
        }
        break;

    default:
        printf("Invalid Task!\n");
        break;
    }
    return 0;
}