#include <stdio.h>
int main()
{
  int pl1, guessing_number;
  printf("Player-1 Guess any Number: ");
  scanf("%d", &pl1);
  printf("Enter the tries number for Player-2: ");
  int num;
  scanf("%d", &num);
  int Tries_Left = num;
  while (Tries_Left > 0)
  {
    printf("Player-2 guess the number: ");
    scanf("%d", &guessing_number);
    if (pl1 == guessing_number)
    {
      printf("Right! Player-2 Wins.\n");
      break;
    }
    else
    {
      Tries_Left--;
      printf("Wrong, %d Choice(s) Left!\n", Tries_Left);
    }
  }
  if (Tries_Left == 0)
  {
    printf("Player-1 Wins!\n");
  }

  return 0;
}