/*Program that will declare and initialize an integer and a floating point number. 
Then it will perform floating to integer and integer to floating conversions using
    (a) Assignment operation
    (b) Type casting*/
#include <stdio.h>
int main()
{
    int intValue = -130;;
    float floatValue 123.126;

    printf("A.----Using Assignment Operation-----\n");
    int floatToInt = floatValue;
    float intTofloat = intValue;
    printf("Float to Integer: %d\n", floatToInt);
    printf("Integer to float: %f\n", intTofloat);

    printf("B.----Using Type Casting------\n");
    int floatToIntCast = (int)floatValue;
    float intTofloatCast = (float)intValue;
    printf("Float to Integer: %d\n", floatToIntCast);
    printf("Integer to float: %f\n", intTofloatCast);

    return 0;
}