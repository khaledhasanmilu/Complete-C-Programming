#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000001];
    scanf("%1000000s", str);
    long long int sum = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        int digit = str[i] - '0';
        sum = sum + digit;
    }

    printf("%lld\n", sum);
    return 0;
}