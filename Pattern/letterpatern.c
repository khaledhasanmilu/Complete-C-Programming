#include<stdio.h>
int main(){
    int n;
    char ch = 'A';
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%c ",ch);
        }
        printf("\n");
        ch++;
    }
    
}