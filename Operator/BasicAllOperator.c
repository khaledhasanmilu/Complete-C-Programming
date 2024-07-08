#include<stdio.h>
int main(){
int a,b;
printf("Enter two value: ");
scanf("%d %d",&a,&b);
int sum = a + b;
int sub = a-b;
int mul = a * b;
int quo = a / b;
int rem = a % b;
printf("Addition: %d\n",sum);
printf("Substraction: %d\n",sub);
printf("Multiplication: %d\n",mul);
printf("Quotient: %d\n",quo);
printf("Reminder: %d",rem);

  return 0;
}