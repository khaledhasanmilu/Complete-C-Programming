#include<stdio.h>
int arr[1000];
int main(){
int length;
scanf("%d",&length);
for (int i = 0; i < length; i++)
{
    scanf("%d",&arr[i]);
}
int indx;
printf("Enter index for deletion: ");
scanf("%d",&indx);
for (int i = indx; i <length-1; i++)
{
    arr[i]=arr[i+1];
    
}
length--;
for (int i = 0; i < length; i++)
{
    printf("%d ",arr[i]);
}

    return 0;
}