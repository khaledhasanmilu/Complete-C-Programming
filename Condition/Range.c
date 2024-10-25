#include<stdio.h>
int main(){
    int n,num,minRange,maxRange;
    scanf("%d",&n);
    scanf("%d%d",&minRange, &maxRange);
    int count = 0;
    while (n--)
    {
       // printf("enter phone price: ");
        scanf("%d",&num);
        if (num >= minRange && num<=maxRange)
        {
            count++;
        }
        
    }
    printf("%d\n",count);
    
    return 0;
}