#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
char str1[11];
char str2[11];
scanf("%s %s",str1,str2);
int size1 = strlen(str1);
int size2 = strlen(str2);
printf("%d %d\n",size1,size2);
printf("%s%s\n",str1,str2);
char c0 = str1[0];
char c1 = str2[0];
str1[0]=c1;
str2[0]=c0;
printf("%s %s\n",str1,str2);

    return 0;
}
