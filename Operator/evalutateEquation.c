/*Program that will evaluate the following equations -
    X = a – b / 3 + c * 2 – 1 
    Y = a – (b / (3 + c) * 2) - 1 
    Z = a – ((b / 3) + c * 2) - 1 
    */
#include <stdio.h>
int main()
{
    int a = 9;
    int b = 12;
    int c = 3;
    int X = (a - (b / 3) + (c * 2) - 1);
    int Y = (a - (b / (3 + c) * 2) - 1);
    int Z = (a - ((b / 3) + c * 2)) - 1;
    printf("X: %d\n", X);
    printf("Y: %d\n", Y);
    printf("Z: %d\n", Z);
    return 0;
}