#include <stdio.h>

#define S 5

int main() {
  int sueldos[S] = {0};
  int edades[S] = {0};
  int edad, sueldo, sueldo_total, edad_total = 0;
  float sueldos_promedio, sueldo_promedio_23_40, edad_promedio = 0.0;
  int sueldo_total_23_40 = 0;
  int cantidad_23_40 = 0.0;
  int edad_30_sueldo_1000 = 0;
  int menor_edad_promedio = 0;

  for (int i = 0; i < S; i++) {
    printf("Ingresa edad y sueldo del empleado");
    printf("Edad: ");
    scanf("%d", &edad);
    printf("Sueldo: ");
    scanf("%d", &sueldo);

    edades[i] = edad;
    sueldos[i] = sueldo;

    sueldo_total += sueldo;
    edad_total += edad;
  }

  // Sueldo y edad promedio generales
  sueldos_promedio = sueldo_total / S;
  edad_promedio = edad_total / S;
  printf("El salario promedio de los empleados es: %.f --- La edad promedio "
         "es: %.f \n",
         sueldos_promedio, edad_promedio);

  // Loop general
  for (int i = 0; i < S; i++) {
    if (edades[i] > 30 && sueldos[i] < 1000) {
      edad_30_sueldo_1000++;
    }
    if (edades[i] < edad_promedio) {
      menor_edad_promedio++;
    }
    if (edades[i] > 23 && edades[i] < 40) {
      cantidad_23_40++;
      sueldo_total_23_40 += sueldos[i];
    }
  }

  // Sueldo promedio 23-40 años
  if (cantidad_23_40 > 0) {
    sueldo_promedio_23_40 = sueldo_total_23_40 / cantidad_23_40;
    printf("Promedio sueldo empleados entre 23 y 40 años: $%.f \n",
           sueldo_promedio_23_40);
  }

  // Empleados > 30 años con sueldo < 1000
  printf("Empleados menores de 30 años con sueldo menor a 1000: %d \n",
         edad_30_sueldo_1000);

  // Empleados edad < promedio
  printf("Cantidad empleados edad menor al promedio: %d \n",
         menor_edad_promedio);
}
