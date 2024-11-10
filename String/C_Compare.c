#include <stdio.h>
#include <string.h>
int main()
{
    char str1[1000];
    char str2[1000];
    scanf("%s", str1);
    scanf("%s", str2);
    if (strcmp(str1,str2)<0)
    {
        printf("%s\n", str1);
    }
    else
    {
        printf("%s\n", str2);
    }

    return 0;
}