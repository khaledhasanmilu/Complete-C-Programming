/*
Program that will take two numbers X & Y as inputs and decide whether X is greater than/less than/equal to Y.
*/
#include <stdio.h>
int main()
{
    int X, Y;
    printf("Enter two Number: ");
    scanf("%d%d", &X, &Y);
    if (X > Y)
    {
        printf("%d is greater then %d.\n", X, Y);
    }
    else if (X < Y)
    {
        printf("%d is less then  %d.\n", X, Y);
    }
    else if (X == Y)
    {
        printf("%d is equal %d.\n", X, Y);
    }

    return 0;
}