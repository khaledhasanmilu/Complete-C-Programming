//Program to find size of int, float, double and char of the system.
#include<stdio.h>
int main(){
    printf("Size of Int in: %lu byte(s)\n.",sizeof(int));
    printf("Size of Float in: %lu byte(s)\n.",sizeof(float));
    printf("Size of Double in: %lu byte(s)\n.",sizeof(double));
    printf("Size of Char in: %lu byte(s)\n.",sizeof(char));
    return 0;
}