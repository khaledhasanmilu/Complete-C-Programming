#include<stdio.h>
#include<string.h>
int main(){
    char str[1001];
    scanf("%s",str);
    int l = 0;
    int r = strlen(str)-1;
    int pal = 1;
    while (l<r)
    {
        if (str[l]!=str[r])
        {
            pal = 0;
            break;
        }
        l++;
        r--;   
    }
    if (pal==1)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
    
    



    return 0;
}