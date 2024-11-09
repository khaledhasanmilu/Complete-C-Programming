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
    int left = 0;
    int right = n - 1;
    int pal = 1;
    while (left < right)
    {
        if (arr[left] != arr[right])
        {
            pal = 0;
            break;
        }
        left++;
        right--;
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