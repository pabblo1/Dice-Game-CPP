#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
  int player1total = 0;
  int player2total = 0;

  time_t t;

  srand((unsigned) time(&t));

  char testChar;
  
  printf("Player 1's turn, press a number to roll: \n");
  getchar();
  printf("Player 1 rolled: \n");
  printf("%d\n", rand() % 6 + 1);
  printf("Player 2's turn, press a number to roll: \n");
  getchar();
  printf("Player 2 rolled: \n");
  printf("%d\n", rand() % 6 + 1);
  return 0;
}