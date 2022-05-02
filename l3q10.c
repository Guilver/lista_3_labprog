#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15
int main(void) {
  int m[TAM][TAM], x, count = 0;
  srand(time(NULL));

  printf("Insira um valor de 0 a 99:\n");
  scanf("%d", &x);

  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM; j++) {
      m[i][j] = rand() % 100;
      printf("[%2d] ", m[i][j]);
      if (m[i][j] == x) {
        count++;
      }
    }
    printf("\n");
  }

  printf("\n\nA matriz contem o numero [%d]: %d vezes", x, count);
  return 0;
}