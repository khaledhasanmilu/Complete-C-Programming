#include <stdio.h>
int main()
{
    int n, togleValue;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Toggle which: ");
    scanf("%d",&togleValue);
    //togleValue -= 1;
    if (arr[togleValue] == 0)
    {
        arr[togleValue] = 1;
    }
    else if (arr[togleValue] == 1)
    {
        arr[togleValue] = 0;
    }
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}