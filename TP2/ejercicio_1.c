#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;

  printf("Ingresa valor a: \n");
  scanf("%d", &a);
  printf("Ingresa valor b: \n");
  scanf("%d", &b);

  if (a == b) {
    printf("Los valores son iguales");
  } else {
    printf("Los valores son distintos");
  }
}
