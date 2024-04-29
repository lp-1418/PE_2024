#include <stdio.h>

int main() {
  int const BONO = 50;
  int sueldo = 0;
  int cat = 0;
  int antiguedad = 0;
  int liquidacion_final = 0;

  printf("Ingresa sueldo, categoría y antiguedad del empleado\nsueldo:");
  scanf("%d", &sueldo);
  printf("categoría: ");
  scanf("%d", &cat);
  printf("antiguedad: ");
  scanf("%d", &antiguedad);

  if (cat == 1) {
    liquidacion_final = sueldo + (BONO * antiguedad);
  } else {
    liquidacion_final = sueldo;
  }

  printf("El empleado cobrará %d", liquidacion_final);
}
