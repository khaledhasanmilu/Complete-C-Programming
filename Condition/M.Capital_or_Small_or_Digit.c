#include <stdio.h>
int main()
{
    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("ALPHA\nIS SMALL\n");
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        printf("ALPHA\nIS CAPITAL\n");
    }
    else if (ch >= '0' && ch <= '9')
    {
        printf("IS DIGIT\n");
    }

    return 0;
}