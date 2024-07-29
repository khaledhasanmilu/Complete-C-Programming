#include<stdio.h>
int main(){
    int Year;
    printf("Enter a year for check it leap year or not: ");
    scanf("%d",&Year);
    if (( Year % 4 == 0 && Year % 100 != 0 )   ||  ( Year % 400 ==0 ))
    {
        printf("YES, Leap Year.\n");
    }
    else{
        printf("NO, Not Leap Year.\n");
    }
    
    return 0;
}