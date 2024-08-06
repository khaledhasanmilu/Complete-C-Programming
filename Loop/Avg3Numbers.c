/*
Write a program (WAP) that will take N numbers as inputs and compute their average. 
(Restriction: Without using any array)
sample input: 
3
10  20  30.5	
sample output:
AVG of 3 inputs: 20.166667
*/
#include <stdio.h>
int main()
{
  int n;
  float input, avg, sum = 0;
  printf("Enter the value of n: ");
  scanf("%d", &n);
  printf("Enter the value for average: ");
  for (int i = 1; i <= n; i++)
  {
    scanf("%f", &input);
    sum += input;
  }
  avg = (sum / n);
  printf("Average of %d inputs: %f", n, avg);
  return 0;
}