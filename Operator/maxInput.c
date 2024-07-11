// usimg if else we find maximum value within two number.
#include <stdio.h>
int main()
{
    int num1, num2;

    printf("Enter two value for Finding max: ");
    scanf("%d%d", &num1, &num2);
    printf("=====Using Conditional Operator======\n");
    int maxnum;
    maxnum = (num1 > num2) ? num1 : num2;
    printf("\tMaximum: %d\n", maxnum);

    printf("=====With if else======\n");
    if (num1 > num2)
    {
        printf("\t%d is Maximum.\n", num1);
    }
    else
    {
        printf("\t%d is Maximum.\n", num2);
    }

    return 0;
}