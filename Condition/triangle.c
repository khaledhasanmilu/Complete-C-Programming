#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three Degree Value: ");
    scanf("%d%d%d",&a, &b, &c);
    if (a+b+c<=180 && (a!=0 && b!=0))
    {
        printf("Yes.\n");
    }
    else
    {
        printf("No.\n");
    }
    
    
    
    return 0 ; 

}