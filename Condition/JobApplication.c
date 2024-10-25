#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while (n --)
    {
        int num;
        scanf("%d", &num);
        if (num < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (num >= 1 && num <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (num >= 4 && num <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else
        {
            printf("Senior candidate.\n");
        }
    }

    return 0;
}