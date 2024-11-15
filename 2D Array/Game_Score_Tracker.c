#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int arr[100000];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int highest = arr[0];
    int lowest = arr[0];
    int highest_count = 0, lowest_count = 0;
    for (int i = 1; i < n; i++)
    {
        if (highest < arr[i])
        {
            highest_count++; // 10 5 20  20 4 5 2 25 1 --- 3
            highest = arr[i];
        }
        if (lowest>arr[i])
        {
            lowest_count++;
            lowest = arr[i];
        }
        
    }
    printf("%d %d\n", highest_count, lowest_count);

    return 0;
}