#include <stdio.h>
#include <string.h>
#define TAM 30

int main(void) {

  char v[TAM], c[TAM];
  printf("Insira a primeira string:\n");
  scanf("%s", v);
  printf("Insira a segunda string:\n");
  scanf("%s", c);

  if (strlen(c) == strlen(v)) {
    for (int i = 0; i <= strlen(v); i++) {
      if (v[i] != c[i]) {
        printf("São diferentes\n");
        i = TAM;
      } else if (i == strlen(v)) {
        printf("São iguais\n");
      }
    }
  } else {
    printf("São diferentes\n");
  }

  return 0;
}