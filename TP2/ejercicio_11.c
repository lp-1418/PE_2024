#include <stdio.h>

int main() {
  int horas_trabajadas = 0;
  int cat = 0;
  int liquidacion_final = 0;

  printf("Ingresa las horas trabajadas por el empleado y su categoría \nhoras "
         "trabajadas: ");
  scanf("%d", &horas_trabajadas);
  printf("Ingresa su categoría (1, 2, 3): ");
  scanf("%d", &cat);

  switch (cat) {
  case 1:
    liquidacion_final = horas_trabajadas * 50;
    break;
  case 2:
    liquidacion_final = horas_trabajadas * 70;
    break;
  case 3:
    liquidacion_final = horas_trabajadas * 80;
    break;
  }

  printf("El empleado de categoría %d cobrará %d", cat, liquidacion_final);
}
