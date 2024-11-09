#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int n;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%s", str);
        int size = strlen(str);
        if (size <= 10)
        {
            printf("%s\n", str);
        }
        else
        {
            int size2 = strlen(str) - 2;
            printf("%c%d%c\n", str[0], size2, str[strlen(str) - 1]);
        }
    }

    return 0;
}