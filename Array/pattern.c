#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
         printf("%d",j);  
    
        }
        printf("\n");

    }
     for (int i = 1; i <= n; i++)
    { int x=1;
        for (int j = 1; j <= n; j++)
        {
        if (j<=i)
        {
           printf(" ");
        }
        else
        {
            printf("%d",x);
            x++;
        }
        
        }
        printf("\n");

    }
}