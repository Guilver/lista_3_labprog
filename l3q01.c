#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 15

int main(void) {
  srand(time(NULL));
  float v[TAM], maior, menor;

  for (int i = 0; i <= TAM; i++) {
    v[i] = rand() % 100;
    if (i == 0) {
      maior = v[i];
      menor = v[i];
    } else {
      if (maior < v[i]) {
        maior = v[i];
      }
      if (menor > v[i]) {
        menor = v[i];
      }
    }
  }

  for (int i = 0; i <= TAM; i++) {
    printf("[%.2f] ", v[i]);
  }

  printf("\n\n %.2f + %.2f = %.2f\n", maior, menor, maior + menor);
  return 0;
}