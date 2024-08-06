/*
Write a program (WAP) that will print following series upto Nth terms.
1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, …….
sample input : 4   sample output : 1, 0, 1, 0
*/
#include <stdio.h>
int main()
{
  int n;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Your Result: ");
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 1)
    {
      printf("1");
    }
    else
    {
      printf("0");
    }
    if (i != n)
    {
      printf(", ");
    }
  }
  printf("\n");

  return 0;
}