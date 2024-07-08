#include <stdio.h>

int main() {
    int X;

    printf("Enter a number: ");
    scanf("%d", &X);

    // Post-increment: X++ (uses the value first, then increments)
    printf("X++ : %d\n", X++);
    
    // Reset X to demonstrate other operators (for clear demonstration)
    X--; // Undo the post-increment effect

    // Pre-increment: ++X (increments the value first, then uses it)
    printf("++X : %d\n", ++X);
    
    // Post-decrement: X-- (uses the value first, then decrements)
    printf("X-- : %d\n", X--);
    
    // Pre-decrement: --X (decrements the value first, then uses it)
    printf("--X : %d\n", --X);

    return 0;
}
