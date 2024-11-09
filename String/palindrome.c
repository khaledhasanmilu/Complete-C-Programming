#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int l = 0;
    int r = n - 1;
    int pal = 1;
    while (l < r)
    {
        if (arr[l] != arr[r])
        {
            pal = 0;
            break;
        }
        l++;
        r--;
    }
    if (pal == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}