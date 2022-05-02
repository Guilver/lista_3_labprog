#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 3

int main(void) {
  int v[TAM], m = 0, g = 1;
  srand(time(NULL));
  for (int i = 0; i < TAM; i++) {
    v[i] = rand() % 20;
    m += v[i];
    g *= v[i];
  }
  printf("Media aritmetica: %.2f\nMedia geometrica: %.2f\n", (float)m / TAM,
         (float)pow(g, (float)1 / TAM));
  return 0;
}