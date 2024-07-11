// this code represent x increse y time and then x decrese y time.
#include <stdio.h>
int main()
{
    int x = 5, y = 10;
    x += y;
    printf("Increment Value: %d\n", x);
    x = 5;
    x -= y;
    printf("Decrement Value: %d\n", x);
    return 0;
}