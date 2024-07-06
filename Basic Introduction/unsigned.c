#include <stdio.h>

int main() {
    // Declare and initialize variables with their maximum values
    unsigned int uInt1 = 4294967295U;
    unsigned long int uLongInt1 = 4294967295UL;
    unsigned long long int uLongLongInt1 = 18446744073709551615ULL;
    unsigned short int uShortInt1 = 65535;

    // Print the initialized values
    printf("The unsigned int value: %u\n", uInt1);
    printf("The unsigned long int value: %lu\n", uLongInt1);
    printf("The unsigned long long int value: %llu\n", uLongLongInt1);
    printf("The unsigned short int value: %hu\n", uShortInt1);

    // Declare and initialize variables with 0
    unsigned int uInt2 = 0;
    unsigned long int uLongInt2 = 0;
    unsigned long long int uLongLongInt2 = 0;
    unsigned short int uShortInt2 = 0;

    // Print the initialized values
    printf("The unsigned int value: %u\n", uInt2);
    printf("The unsigned long int value: %lu\n", uLongInt2);
    printf("The unsigned long long int value: %llu\n", uLongLongInt2);
    printf("The unsigned short int value: %hu\n", uShortInt2);

    return 0;
}
