#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d%d", &n, &m);

    if (n != m)
    {
        printf("NO\n");
        return 0;
    }

    int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((i == j || i + j == n - 1))
            {
                if (arr[i][j] != 1)
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
                }
            }
        }
        if (flag == 0)
            break;
    }

    if (flag == 1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
