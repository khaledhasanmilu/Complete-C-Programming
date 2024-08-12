#include <stdio.h>
int main()
{
  int player1, player2, flag = 0;
  int tries = 3;
  printf("Player-1 set a guessing number: ");
  scanf("%d", &player1);
  printf("Player-2, you have 3 chances to win: ");
  while (tries>0)
  {
    printf("Enter your guess: ");
    scanf("%d", &player2);
    if (player2 == player1)
    {
      printf("Player-2 wins!\n");
      flag = 1;
      break;
    }
    else
    {
      tries--;
      if (tries > 0)
      {
        printf("Wrong,%d Chance(s) Left!\n",tries);
      }
    }
  }
  if (flag == 0)
  {
    printf("Player-1 wins!");
  }

  return 0;
}