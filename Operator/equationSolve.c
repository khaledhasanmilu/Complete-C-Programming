/*
Program that will take two numbers (a, b) as inputs and 
compute the value of the equation – (With using math.h)

X =  (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3)
*/
#include <stdio.h>

int main() {
    double a, b;
    printf("Enter two values: ");
    scanf("%lf %lf", &a, &b);

    // Compute the powers manually
    double a2 = a * a;
    double a3 = a * a * a;
    double b2 = b * b;
    double b3 = b * b * b;

    // Compute the value of X
    double X = (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3);

    // Print the result
    printf("Result: %lf\n", X);

    return 0;
}
/*
Program that will take two numbers (a, b) as inputs and compute 
the value of the equation – (With using math.h)

X =  (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3)
#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    printf("Enter two values: ");
    scanf("%lf %lf", &a, &b);

    // Compute the value of X using pow for powers
    double X = (3.31 * pow(a, 2) + 2.01 * pow(b, 3)) / (7.16 * pow(b, 2) + 2.01 * pow(a, 3));

    // Print the result
    printf("Result: %lf\n", X);

    return 0;
}
*/