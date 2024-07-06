#include <stdio.h>

int main() {
    long int l = 2147483647;
    long long ll = 9223372036854775807;
    long double db = 3.141592653589793238;
    short int s = 32767;

    printf("The long int value: %ld\n", l);
    printf("The long long value: %lld\n", ll);
    printf("The long double value: %.10Lf\n", db);  // Adjusted precision for long double
    printf("The short int value: %d\n", s);

    return 0;
}
