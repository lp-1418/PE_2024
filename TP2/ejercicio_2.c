#include <stdio.h>

int main() {
  int a = 0;

  printf("Ingresa un número: \n");
  scanf("%d", &a);

  if (a == 0) {
    printf("El número es cero(0)");
  } else if (a < 0) {
    printf("El número es negativo");
  } else {
    printf("El número es positivo");
  }
}
