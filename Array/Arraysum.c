#include<stdio.h>
int main(){
int n;
printf("Declare array Size: ");
scanf("%d",&n);
int arr[n],sum=0;
printf("Enter array %d value: ",n);
for (int i = 0; i < n; i++)
{
    scanf("%d",&arr[i]);
    sum = sum + arr[i];
}
printf("sum: %d\n",sum);
    return 0;
}