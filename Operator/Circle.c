#include <stdio.h>
#define PI 3.14
int main()
{
  float radius;
  printf("Enter the value of Radius: ");
  scanf("%f", &radius);
  float Area = 2 * PI * radius;
  printf("Area: %.2f", Area);

  return 0;
}