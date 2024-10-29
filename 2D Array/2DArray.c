#include<stdio.h>
int main(){
int m,n;
scanf("%d%d",&m,&n);
int arr[m][n];
for (int i = 1; i <= m; i++)
{
    for (int j = 1; j <= n; j++)
    {
        scanf("%d",&arr[i][j]);
    }
    
}
arr[1][3]=9;
printf("Output:\n");
for (int i = 1; i <= m; i++)
{
    for (int j = 1; j <= n; j++)
    {
       printf("%d ",arr[i][j]);
    }
    printf("\n");
}

    return 0;
}