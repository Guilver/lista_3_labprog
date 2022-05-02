#include <stdio.h>
#include <string.h>
#define TAM 30

int main(void) {

  char v[TAM];
  printf("Insira a string:\n");
  scanf("%s", v);

  for (int i = strlen(v); i >= 0; i--) {
    printf("%c", v[i]);
  }

  return 0;
}