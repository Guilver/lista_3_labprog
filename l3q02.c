#include <stdio.h>
#define TAM 30

int main(void) {

  char v[TAM], c;
  printf("Insira a string:\n");
  scanf("%s", v);

  printf("Insira um caractere:\n");
  scanf(" %c", &c);

  for (int i = 0; i <= TAM; i++) {
    if (v[i] == c) {
      printf("Possui o caractere\n");
      i = TAM;
    } else if (i == TAM - 1) {
      printf("Não possui o caractere\n");
    }
  }

  return 0;
}