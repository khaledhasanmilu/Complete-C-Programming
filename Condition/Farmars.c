#include<stdio.h>
#include<math.h>
int main(){;
int T;
scanf("%d",&T);
while(T--){    
int Day,M1,M2;
scanf("%d%d%d",&M1, &M2, &Day);
int Day_N = (M1*Day)/(M1+M2);
int Difference =  Day - floor(Day_N);
printf("%d\n",Difference);
}

    return 0;
}