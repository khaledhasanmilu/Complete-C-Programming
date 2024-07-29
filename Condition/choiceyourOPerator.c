/*
Program that will evaluate simple expressions of the form-
<number1>   <operator>   <number2>; where operators are (+, - , *, /)
And if the operator is “/”, then check if <number2> nonzero or n
*/
#include <stdio.h>
int main()
{
    double n1, n2;
    char operator;
    printf("Use this formate.Example: ( 9 * 3 )-->(<number1>   <operator>   <number2>).\n");
    printf("Enter two number and operator((+, - , *, /)): ");
    scanf("%lf %c %lf", &n1, &operator, &n2);
    switch (operator)
    {
    case '+':
        printf("Addition: %lf\n", n1 + n2);
        break;

    case '-':
        printf("Substitution: %lf\n", n1 - n2);
        break;
    case '*':
        printf("Multiplication: %lf\n", n1 * n2);
        break;
    case '/':
        if (n2 != 0)
        {
            printf("Division: %lf\n", n1 / n2);
        }
        else
        {
            printf("Division: Zero as divisor is not valid!\n");
        }
        break;
    default:
        printf("Invalid Operator.\n");
        break;
    }
    return 0;
}