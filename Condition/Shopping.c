#include<stdio.h>
int main(){
long long int N;
scanf("%lld",&N);
if (N>1000)
{
    printf("I will buy Punjabi\n");
    int money = N -1000;
    if (money>=500)
    {
        printf("I will buy new shoes\n");
        printf("Alisa will buy new shoes\n");
    }
    else{
        return 0;
    }
    
}
else{
    printf("Bad luck!\n");
}



    return 0;
}