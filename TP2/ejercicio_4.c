#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;
  int resta = 0;

  printf("Ingresa valor a: \n");
  scanf("%d", &a);
  printf("Ingresa valor b: \n");
  scanf("%d", &b);

  if (a > b) {
    resta = a - b;
    printf("El resultado de la resta es: %d", resta);
  } else {
    resta = b - a;
    printf("El resultado de la resta es: %d", resta);
  }
}
