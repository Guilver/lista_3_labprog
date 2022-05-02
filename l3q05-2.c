#include <stdio.h>
#include <string.h>
#define TAM 30

int main(void) {

  char v[TAM], c[TAM];
  printf("Insira a primeira string:\n");
  scanf("%s", v);
  printf("Insira a segunda string:\n");
  scanf("%s", c);

  strcat(v, c);
  printf("%s\n", v);

  return 0;
}