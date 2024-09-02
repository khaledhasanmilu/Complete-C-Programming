#include <stdio.h>

int main()
{
    char input;
    int i = 1;

    printf("Type something (type 'A' to exit): ");

    while (1)
    {
        // Read a single character from input
        input = getchar();

        // Check if the input character is 'A'
        if (input == 'A')
        {
            break;
        }

        if (input != '\n')
        {
            printf("You typed input %d: %c\n", i, input);
            i++;
        }
    }

    return 0;
}
