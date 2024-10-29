#include <stdio.h>
int main()
{
    int m, n;
    // printf("Enter the value of row and colum: ");
    scanf("%d%d", &m, &n);
    int arr[m][n];
    // printf("Input Here:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int element = arr[0][0];
    int flag = 1;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
            {
                if (arr[i][j] != element)
                {
                    flag = 0;
                    break;
                }
            }
            else
            {
                if (arr[i][j] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 0)
            {
                break;
            }
        }
    }
    if (flag == 1)
    {
        printf("Scaler.");
    }
    else
    {
        printf("Not Scaler.");
    }

    return 0;
}