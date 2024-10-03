#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    printf("Your Square Shape:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
    
}