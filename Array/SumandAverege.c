#include<stdio.h>
int main(){
int n;
printf("Enter array Range: ");
scanf("%d",&n);
int arr[n];
printf("Enter %d value for array: ",n);
//input array value
for (int i = 1; i <= n; i++)
{
    scanf("%d",&arr[i]);
}
//for sum
int sum =0;
for (int i = 1; i <= n; i++)
{
    sum = sum + arr[i];
}
//output
printf("Sum of total %d value is : %d\n",n,sum);
printf("Average of total %d value is: %.2f\n",n,(float)sum/n);
    return 0;
}