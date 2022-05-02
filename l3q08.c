#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TAM 100

int main(void) {
  int v[TAM], i1, i2, temp;
  unsigned char ordenado;
  srand(time(NULL));

  printf("Intervalo inferior:\n ");
  scanf("%d", &i1);
  printf("Intervalo superior:\n ");
  scanf("%d", &i2);

  if (i2 < i1) {
    i1 = i1 ^ i2;
    i2 = i1 ^ i2;
    i1 = i1 ^ i2;
  }

  for (int i = 0; i < TAM; i++) {
    v[i] = i1 + rand() % (i2 - i1);
  }

  do {
    ordenado = 1;
    for (int k = 0; k < TAM - 1; k++) {
      if (v[k] > v[k + 1]) {
        temp = v[k];
        v[k] = v[k + 1];
        v[k + 1] = temp;
        ordenado = 0;
      }
    }
  } while (ordenado == 0);

  printf("Matriz ordenada:\n");
  for (int i = 0; i < TAM; i++) {
    printf("[%d] ", v[i]);
  }

  return 0;
}
