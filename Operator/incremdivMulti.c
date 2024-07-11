#include <stdio.h>
int main()
{
    int x =56;
    int y = 10;
    x *= y;
    printf("Multication x of y: %d\n", x);
    x = 56;
    x /= y;
    printf("Division x of y: %d\n", x);
    return 0;
}