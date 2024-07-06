#include <stdio.h>
int main()
{
  int intValue;     // integer datatype----for print use--%d
  float floatValue; // Floating datatype---for print use--%f
  char ch;          // Charecter datatype---for print use--%c
  intValue = 5;
  floatValue = 3.141593;
  ch = 'a';
  printf("The integer value: %d\n", intValue);
  printf("The floating point value: %f\n", floatValue);
  printf("The character value: %c", ch);

  return 0;
}