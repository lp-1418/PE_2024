#include <stdio.h>

int main() {
  int num = 0;
  int mayores_quince = 0;
  float promedio_general = 0;
  int suma_general = 0;
  float promedio_pares = 0;
  int suma_pares = 0;
  int cantidad_pares = 0;
  float promedio_impares = 0;
  int suma_impares = 0;
  int cantidad_impares = 0;

  for (int i = 0; i < 8; i++) {
    printf("Ingrese valor(%d): ", i + 1);
    scanf("%d", &num);

    suma_general += num;

    if (num > 15) {
      mayores_quince++;
    }

    if (num % 2 == 0) {
      suma_pares += num;
      cantidad_pares++;
    } else {
      suma_impares += num;
      cantidad_impares++;
    }
  }

  promedio_general = suma_general / 8;
  promedio_pares = suma_pares / cantidad_pares;
  promedio_impares = suma_impares / cantidad_impares;

  printf("Promedio general: %.f \nPromedio pares: %.f \nPromedio impares %.f "
         "\nMayores a quince %d",
         promedio_general, promedio_pares, promedio_impares, mayores_quince);
}
