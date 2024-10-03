/*
Write a program (WAP) that will print following series upto Nth terms.
1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, …….
sample input : 4   sample output : 1, 2, 3, 4
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
    printf("%d", i);
    if (i != n)
    {
      printf(", ");
    }
  }
  printf("\n");

  return 0;
}