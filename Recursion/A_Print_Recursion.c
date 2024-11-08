#include<stdio.h>
void PrintRecursive(int n){
//base case
if (n<=0)
{
  return;
}
printf("I love Recursion\n");
PrintRecursive(n-1);

}
int main(){
int n;
scanf("%d",&n);
PrintRecursive(n);
return 0;
}
