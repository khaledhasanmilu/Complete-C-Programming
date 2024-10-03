#include<stdio.h>
int main(){
    int i,x;
    scanf("%d",&x);
    for (int i = 1; i <= x; i++)
    {
        for (int j = x; j >= i; j--)
        {
            printf(" %d",j);
        }
        printf("\n");
        
    }
    
    return 0;
}