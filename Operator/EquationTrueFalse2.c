/*
Program that will take a, b & c as inputs and decide if the statements are True (1) of False (0)
a.((a + b) <= 80) && (b >= 0);
b.((a - b) == 0) || (c != 0);
c.(a != b) || ((b < a) && (c > 0));
*/
#include <stdio.h>
int main()
{
    double a, b, c;
    printf("Enter the value of a,b and c: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    int resultA = ((a + b) <= 80) && (b >= 0);
    int resultB = ((a - b) == 0) || (c != 0);
    int resultC = (a != b) || ((b < a) && (c > 0));

    printf("a)Result: %d\nb)Result: %d\nc)Result:%d\n", resultA, resultB, resultC);

    return 0;
}