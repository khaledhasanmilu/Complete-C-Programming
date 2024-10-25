#include <stdio.h>
#include <string.h>

int main()
{
    char str1[1001], str2[1001], str3[1001], minimum[1001], maxstring[1001];
    scanf("%s %s %s", str1, str2, str3);
    strcpy(minimum, str1);
    strcpy(maxstring, str1);
    if (strcmp(str2, minimum) < 0)
    {
        strcpy(minimum, str2);
    }
    if (strcmp(str3, minimum) < 0)
    {
        strcpy(minimum, str3);
    }
    if (strcmp(str2, maxstring) > 0)
    {
        strcpy(maxstring, str2);
    }
    if (strcmp(str3, maxstring) > 0)
    {
        strcpy(maxstring, str3);
    }
    printf("%s\n", minimum);
    printf("%s\n", maxstring);

    return 0;
}
