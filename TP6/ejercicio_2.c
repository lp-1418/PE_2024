#include <stdio.h>

int main() {
  int matriz[4][2] = {0};
  int edad, sueldo, sueldo_total, edad_total = 0;
  float sueldos_promedio, sueldo_promedio_23_40, edad_promedio = 0.0;
  int sueldo_total_23_40 = 0;
  int cantidad_23_40 = 0.0;
  int edad_30_sueldo_1000 = 0;
  int menor_edad_promedio = 0;

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 1; j++) {
      printf("Ingresa edad y sueldo del empleado");
      printf("Edad: ");
      scanf("%d", &edad);
      printf("Sueldo: ");
      scanf("%d", &sueldo);

      sueldo_total += sueldo;
      edad_total += edad;
      matriz[i][j] = sueldo;
      matriz[i][j + 1] = edad;
    }
  }

  // Sueldo y edad promedio generales
  sueldos_promedio = sueldo_total / 4.0;
  edad_promedio = edad_total / 4.0;
  printf("El salario promedio de los empleados es: %.f --- La edad promedio "
         "es: %.f \n",
         sueldos_promedio, edad_promedio);

  // Loop general
  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 1; j++) {
      if (matriz[i][j + 1] >= 23 && matriz[i][j + 1] <= 40) {
        cantidad_23_40++;
        sueldo_total_23_40 += matriz[i][j];
      }
      if (matriz[i][j + 1] > 30 && matriz[i][j] < 1000) {
        edad_30_sueldo_1000++;
      }
      if (matriz[i][j + 1] < edad_promedio) {
        menor_edad_promedio++;
      }
    }
  }

  // Sueldo promedio 23-40 años
  sueldo_promedio_23_40 = sueldo_total_23_40 / cantidad_23_40;
  printf("Promedio sueldo empleados entre 23 y 40 años: $%.f \n",
         sueldo_promedio_23_40);

  // Empleados > 30 años con sueldo < 1000
  printf("Empleados menores de 30 años con sueldo menor a 1000: %d \n",
         edad_30_sueldo_1000);

  // Empleados edad < promedio
  printf("Cantidad empleados edad menor al promedio: %d \n",
         menor_edad_promedio);
}
