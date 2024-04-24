#include <stdio.h>

int main() {
  int a = 0;
  int b = 0;
  int prod = 0;

  printf("Ingresa valor a: \n");
  scanf("%d", &a);
  printf("Ingresa valor b: \n");
  scanf("%d", &b);

  if (a > b) {
    prod = a * b;
    printf("El producto de los valores es: %d", prod);
  }

  if (a == b) {
    printf("Los números son iguales");
  }

  printf("Error");
}
