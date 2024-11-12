#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
long long arr[100000];
int TwoCount = 0,ThreeCount = 0;
for (int i = 0; i < n; i++)
{
    scanf("%lld",&arr[i]);
    if (arr[i]%2==0 && arr[i]%3==0)
    {
            TwoCount++;
            
    }
   else if (arr[i]%2==0 && arr[i]%3!=0){
        TwoCount++;
    }
   else if (arr[i]%3==0 && arr[i]%2!=0){
        ThreeCount++;
    }
   
}
printf("%d %d",TwoCount,ThreeCount);


    return 0;
}