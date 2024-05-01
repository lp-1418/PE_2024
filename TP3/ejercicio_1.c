#include <stdio.h>

int main() {
  float promedio = 0;
  int num = 0;
  int sumador = 0;

  for (int i = 0; i < 25; i++) {
    printf("Ingrese el número(%d): ", i + 1);
    scanf("%d", &num);
    sumador += num;
  }

  promedio = sumador / 25;

  printf("El promedio es %.f", promedio);
}
