#include <stdio.h>
#include <stdbool.h>  // Include for boolean data type

int main() {
    double doubleValue = 3.14;     // Declare and initialize a double variable
    bool booleanValue = true;      // Declare and initialize a boolean variable

    printf("The double value: %lf\n", doubleValue);   // Print the double value
    printf("The boolean value: %d\n", booleanValue);  // Print the boolean value (as an integer)

    doubleValue = 1.618039;        // Update double variable with a new value
    booleanValue = false;          // Update boolean variable with a new value

    printf("The double value: %lf\n", doubleValue);   // Print the updated double value
    printf("The boolean value: %d\n", booleanValue);  // Print the updated boolean value (as an integer)

    return 0;
}
