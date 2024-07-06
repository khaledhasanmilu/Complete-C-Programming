#include <stdio.h>

int main() {
    int Int;     // integer datatype
    float fl;    // floating-point datatype
    char ch;     // character datatype
    
    scanf("%d", &Int);    // read an integer value
    scanf("%f", &fl);     // read a floating-point value
    scanf(" %c", &ch);    // read a character value, with a space to skip any newline
    
    printf("The integer value: %d\n", Int);
    printf("The floating point value: %f\n", fl);
    printf("The character value: %c\n", ch);

    return 0;
}
