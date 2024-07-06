/*Program that will define a global and a local variable with the same name but with different values, and then do the following steps in order-
A.	Print the value of the variable before defining the local variable
B.	Print the value of the variable after defining the local variable
C.	Explicitly print the value of the variable as global
*/
#include<stdio.h>
int value =10;
int main(){
printf("The Golbal value: %d\n",value);
int value = 20;
printf("The Local value: %d",value);

 extern int value;
        printf("C. Value of value as global: %d\n", value);
    
  return 0;
}