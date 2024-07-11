//Program that will decide whether a number is even or odd.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your value here: ");
    scanf("%d", &num);
    if (!(num % 2 == 0))
    {
        printf("Odd\n");
    }
    else if (num == 0)
    {
        printf("Even.\n");
    }
    else if (num % 2 == 0)
    {
        printf("Even.\n");
    }

    return 0;
}