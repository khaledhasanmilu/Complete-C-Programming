#include <stdio.h>
#include <string.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d", &n);
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &Arr[i]);
    }

    for (int k = 0; k < n; k++)
    {
        for (int j = 1; j <= Arr[k]; j++)
        {
            printf("%d ", j);
        }
        for (int j = Arr[k] - 1; j >= 1; j--)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}