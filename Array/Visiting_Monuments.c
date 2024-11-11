#include <stdio.h>
void calculateValue(int num)
{
    for (int i = 1; i < num; i++)
    {
        printf("%d", i);
        if (i < num)
        {
            printf(" ");
        }
        {
        }
    }
    for (int i = num; i > 0; i--)
    {
        printf("%d", i);
        if (num > 1)
        {
            printf(" ");
        }
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        int num;
        scanf("%d", &num);
         calculateValue(num);
         printf("\n");
    }

    return 0;
}