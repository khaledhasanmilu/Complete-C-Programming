#include<stdio.h>
#include<string.h>
int main(){                 
                            // a b c c d e f '\0'
                            // 0 1 2 3 4 5 6 
char word[1000];
scanf("%s",word);
int size = strlen(word);
//printf("%d\n",size);
int index;
printf("Enter index which you want to delete: ");
scanf("%d",&index);
for (int i = index; i < size; i++)
{
   word[i]=word[i+1];
}
printf("%s",word);

    return 0;
}