#include <stdio.h>
#include <string.h>
int main()
{
    char str1[101];
    char str2[101];
    char str3[101];
    scanf("%s%s%s", str1, str2,str3);
    int size1 = strlen(str1);
    int size2 = strlen(str2);
    int size3 = strlen(str3);
    int count = 0;
    for (int i = 0; i < size1; i++)
    {
        if (str1[i] != str2[i])
        {
            count++;
        }
        if (str1[i] != str3[i])
        {
            count++;
        }
    }
    printf("%d\n", count);

    return 0;
}