#include <stdio.h>
int main()
{
    int n, max, min;
    printf("Enter the array range: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d value of array: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Your Array value: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    max = arr[0];
    min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
       if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {

    }
    printf("Maximum with this %d value is: %d\n",n,max);
    printf("Minimum with this %d value is: %d\n",n,min);

    return 0;
}
