//Input a number and convert it to string.
#include<stdio.h>
int main(){
    int input;
    printf("Please Enter value(0-9): ");
    scanf("%d",&input);
    if (input==0)
    {
        printf("Zero.\n");
    }
    else if (input==1)
    {
        printf("One.\n");
    }
    else if (input==2)
    {
        printf("Two.\n");
    }
    else if (input==3)
    {
        printf("Three.\n");
    }
    else if (input==4)
    {
        printf("Four.\n");
    }
    else if (input==5)
    {
        printf("Five.\n");
    }
    else if (input==6)
    {
        printf("Six.\n");
    }
    else if (input==7)
    {
        printf("Seven.\n");
    }
    else if (input==8)
    {
        printf("Eight.\n");
    }
    else if (input==9)
    {
        printf("Nine.\n");
    }
    else{
        printf("Your value is not within (0-9).\n");
    }
    
    return 0;
}