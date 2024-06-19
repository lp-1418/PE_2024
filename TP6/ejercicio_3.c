#include <stdio.h>
// TODO Sueldo máximo y porcentaje
int main() {
  int matriz[3][3] = {0};
  int empleados_cat, total_sueldos, sueldo_máximo, promedio_sueldos_cat = 0;
  int total_cat_1, total_cat_3 = 0;
  int total_cat_2 = 0;
  int total_sueldos_1 = 0;
  int total_sueldos_2 = 0;
  int total_sueldos_3 = 0;
  int bono = 100;
  int sueldo_1 = 1500;
  int sueldo_2 = 2000;
  int sueldo_3 = 2500;
  int input_cat = 0;
  int input_ant = 0;
  char input_nombre;
  float promedio_general;

  // Nombre [i][0] - Categoria [i][1] - Antiguedad [i][2]

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 1; j++) {
      printf("Ingresa los datos del empleado. \n");

      printf("Nombre (Inicial): ");
      scanf("%s", &input_nombre);
      printf("Categoría (1-2-3): ");
      scanf("%d", &input_cat);
      printf("Antiguedad (Años): ");
      scanf("%d", &input_ant);

      matriz[i][j] = input_nombre;
      matriz[i][1] = input_cat;
      matriz[i][2] = input_ant;
    }
  }

  // Empleado por categoria
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 1; j++) {
      if (matriz[i][1] == 1) {
        total_sueldos_1 += sueldo_1 + (matriz[i][2] * bono);
        total_cat_1++;
        break;
      } else if (matriz[i][2] == 2) {
        total_sueldos_2 += sueldo_2 + (matriz[i][2] * bono);
        total_cat_2++;
        break;
      } else {
        total_sueldos_3 += sueldo_3 + (matriz[i][2] * bono);
        total_cat_3++;
        break;
      }
    }
  }

  // Empleados * cat
  printf("Empleados cat 1 -> %d \nEmpleados cat 2 -> %d \nEmpleados cat 3 -> "
         "%d \n",
         total_cat_1, total_cat_2, total_cat_3);

  // Sueldos pagados por categoria
  printf("Sueldo cat 1 -> %d \nSueldo cat 2 -> %d \nSueldo cat 3 -> %d",
         total_sueldos_1, total_sueldos_2, total_sueldos_3);

  // Total y promedios generales
  total_sueldos = total_sueldos_1 + total_sueldos_2 + total_sueldos_3;
  promedio_general = total_sueldos / 3.0;
  printf("Total de sueldos pagados: %d \nPromedio general: %.f \n",
         total_sueldos, promedio_general);

  // Imprimir matriz general
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
    }
  }

  return 0;
}
