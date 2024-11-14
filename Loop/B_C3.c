#include<stdio.h>
int main(){
int N;
scanf("%d",&N);     //123    a = 3 b =2 c = 1  
int a = N%10;
int num = N/10;
int b = num%10;
int num1 = num/10;
int c = num1%10;
printf("%d%d%d ",b,a,c);
printf("%d%d%d",a,c,b);

    return 0;
}