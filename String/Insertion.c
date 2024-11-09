#include<stdio.h>
int main(){         //abdefg   index ->2 insert c
char word[8];
scanf("%s",word);
for (int i = 6; i >=2; i--)
{
   word[i+1]=word[i];
}
word[2]= 'c';
printf("%s",word);

    return 0;
}