#include <stdio.h>

int main() {
  float promedio = 0;
  int num = 0;
  int sumador = 0;
  int ciclos = 25;

  for (int i = 0; i < ciclos; i++) {
    printf("Ingrese el número(%d): ", i + 1);
    scanf("%d", &num);
    sumador += num;
  }

  promedio = sumador / ciclos;

  printf("El promedio es %.f", promedio);
}
