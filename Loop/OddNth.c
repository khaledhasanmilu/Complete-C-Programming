/*
Write a program (WAP) that will print following series upto Nth terms.
1, 3, 5, 7, 9, 11, 13, 15, 17, 19, 21, 23, 25, 27, 29, 31 …….
sample input : 4   sample output : 1, 3, 5, 7
*/
#include <stdio.h>
int main()
{
  int n, odd = 1;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Your Result: ");
  for (int i = 1; i <= n; i++)
  {
    printf("%d", odd);
    odd += 2;
    if (i != n)
    {
      printf(", ");
    }
  }
  printf("\n");

  return 0;
}
