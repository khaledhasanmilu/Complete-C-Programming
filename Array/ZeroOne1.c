#include<stdio.h>
int main(){
    int n,countZero=0,countOne=0;
    scanf("%d",&n);
    while (n--)
    {
        int num;
        scanf("%d",&num);
        if(num==0){
            countZero++;
        }
        else if (num==1)
        {
            countOne++;
        }
        
    }
    printf("%d %d\n",countZero,countOne);
    
    return 0;
}