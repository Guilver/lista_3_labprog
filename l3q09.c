#include <stdio.h>
#define TAM 3
int main(void) {
  int m[TAM][TAM];
  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < TAM; j++) {
      printf("Valor [%d][%d]:", i+1, j+1);
      scanf("%d", &m[i][j]);
    }
  }
   printf("Diagonal principal:\n");
  for (int i = 0; i < TAM; i++) {
    printf("[%d] ", m[i][i]);
  }
return 0;
}