#include <stdio.h>
#define TAM 30

int main(void) {
  int n = 0;
  char v[TAM];
  printf("Insira a string:\n");
  scanf("%s", v);

  for (int i = 0; v[i] != '\0'; i++) {
    n++;
  }

  printf("Quantidade de caracteres: %d\n", n);
  return 0;
}