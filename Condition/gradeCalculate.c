/*
Program that will take the final score of a student in a particular subject as input and find his/her grade.
*/
#include <stdio.h>
int main()
{
    double number;
    printf("Enter your final Score: ");
    scanf("%lf", &number);
    if (number >= 90 && number <= 100)
    {
        printf("Grade: A.\n");
    }
    
    else if (number >= 86 && number <= 89)
    {
        printf("Grade: A-.\n");
    }
    else if (number >= 82 && number <= 85)
    {
        printf("Grade: B+.\n");
    }
    else if (number >= 78 && number <= 81)
    {
        printf("Grade: B.\n");
    }
    else if (number >= 74 && number <= 77)
    {
        printf("Grade: B-.\n");
    }
    else if (number >= 70 && number <= 73)
    {
        printf("Grade: C+.\n");
    }
    else if (number >= 66 && number <= 69)
    {
        printf("Grade: C.\n");
    }
    else if (number >= 62 && number <= 65)
    {
        printf("Grade: C-.\n");
    }
    else if (number >= 58 && number <= 61)
    {
        printf("Grade: D+.\n");
    }
    else if (number >= 55 && number <= 57)
    {
        printf("Grade: D.\n");
    }
    else if (number < 55)
    {
        printf("Grade: F.\n Try to Focus On your Study.\n");
    }
    else
    {
        printf("Enter Valid Marks .(0-100).\n");
    }

    return 0;
}