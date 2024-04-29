#include <stdio.h>

int main() {
  int horas_trabajadas = 0;
  int cat = 0;
  int liquidacion_final = 0;
  int const TARIFA_CAT_1 = 50;
  int const TARIFA_CAT_2 = 70;
  int const TARIFA_CAT_3 = 80;

  printf("Ingresa las horas trabajadas por el empleado y su categoría \nhoras "
         "trabajadas: ");
  scanf("%d", &horas_trabajadas);
  printf("Ingresa su categoría (1, 2, 3): ");
  scanf("%d", &cat);

  switch (cat) {
  case 1:
    liquidacion_final = horas_trabajadas * TARIFA_CAT_1;
    break;
  case 2:
    liquidacion_final = horas_trabajadas * TARIFA_CAT_2;
    break;
  case 3:
    liquidacion_final = horas_trabajadas * TARIFA_CAT_3;
    break;
  }

  printf("El empleado de categoría %d cobrará %d", cat, liquidacion_final);
}
