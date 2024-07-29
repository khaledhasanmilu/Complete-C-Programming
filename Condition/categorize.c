/*
Program that will categorize a single character that is entered at the terminal, 
whether it is an alphabet, a digit or a special character.
*/
#include<stdio.h>
int main(){
    printf("Enter a charecter: ");
    char ch;
    scanf("%c",&ch);
    if ((ch>='A' && ch<='Z')|| (ch>='a') && (ch<='z'))
    {
        printf("Alphabet.\n");
    }
   else if (ch>='0' && ch<='9')
    {
        printf("Digit.\n");
    }
    else
    {
        printf("Special Charecter.\n");
    }
   
    return 0;
}