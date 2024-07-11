// Program that will decide whether a number is positive or not.
#include <stdio.h>
int main()
{
    int num;
    printf("Enter your value here: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("Positive.\n");
    }
    else if (num < 0)
    {
        printf("Negative.\n");
    }
    else
    {
        printf("Positive.\n");
    }

    return 0;
}