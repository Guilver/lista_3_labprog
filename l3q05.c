#include <stdio.h>
#include <string.h>
#define TAM 30

int main(void) {
  int n;
  char v[TAM], c[TAM];
  printf("Insira a primeira string:\n");
  scanf("%s", v);
  printf("Insira a segunda string:\n");
  scanf("%s", c);
  n = strlen(v);
  for (int i = n; i <= n + strlen(c); i++) {
    v[i] = c[i - n];
  }
  printf("%s\n", v);

  return 0;
}