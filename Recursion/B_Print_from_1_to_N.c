#include<stdio.h>
void print(int x,int n){
if (x>n)
{
    return;
}
printf("%d\n",x);
print(x+1,n);


}
int main(){
int n;
scanf("%d",&n);
print(1,n);
    return 0;
}