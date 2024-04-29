#include <stdio.h>

int main() {
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
    liquidacion_final = sueldo + (50 * antiguedad);
  } else {
    liquidacion_final = sueldo;
  }

  if (antiguedad > 5) {
    printf("El empleado con antiguedad de %d años cobrará %d", antiguedad,
           liquidacion_final);
  } else {
    printf("El empleado no cumple con los requisitos de antiguedad");
  }
}
