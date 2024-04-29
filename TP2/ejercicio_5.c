#include <stdio.h>

int main() {
  int lado_1 = 0;
  int lado_2 = 0;
  int lado_3 = 0;

  printf("Ingresa los 3 lados del triángulo \nlado 1: ");
  scanf("%d", &lado_1);
  printf("lado 2: ");
  scanf("%d", &lado_2);
  printf("lado 3: ");
  scanf("%d", &lado_3);

  if (lado_1 == lado_2 && lado_2 == lado_3) {
    printf("Triángulo equilátero");
  } else if (lado_1 == lado_2 || lado_1 == lado_3 || lado_2 == lado_3) {
    printf("Triángulo isósceles");
  } else {
    printf("Triángulo escaleno");
  };
}
