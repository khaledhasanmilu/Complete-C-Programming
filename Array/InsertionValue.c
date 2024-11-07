#include<stdio.h>
int arr[1000];
int main(){
int length;
scanf("%d",&length);
for (int i = 0; i < length; i++)
{
    scanf("%d",&arr[i]);
}
length++;
int indx,value;
printf("Enter index and value for insertion: ");
scanf("%d%d",&indx, &value);
for (int i = length-1; i >= indx; i--)
{
    arr[i+1]=arr[i];
    
}
arr[indx]=value;
for (int i = 0; i < length; i++)
{
    printf("%d ",arr[i]);
}

    return 0;
}