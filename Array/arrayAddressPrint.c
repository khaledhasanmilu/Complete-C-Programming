#include<stdio.h>
int main(){
    int arr[5];
    for (int i = 0; i <  5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%p\n", (void*)&arr[i]); // %p for printing address, cast to (void*)
    }
    
    return 0;
}