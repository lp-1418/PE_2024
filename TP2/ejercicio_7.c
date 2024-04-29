#include <stdio.h>

int main() {
  int valor_hora = 0;
  int tiempo_trabajado = 0;
  int BONO = 100;
  int sueldo_base = 0;
  int liquidacion_final = 0;

  printf("Ingrese el valor de la hora y el tiempo trabajado por el empleado "
         "\nvalor hora:");
  scanf("%d", &valor_hora);
  printf("tiempo trabajado: ");
  scanf("%d", &tiempo_trabajado);

  sueldo_base = tiempo_trabajado * valor_hora;

  if (tiempo_trabajado > 50 && tiempo_trabajado < 150) {
    liquidacion_final = sueldo_base + BONO;
  } else if (tiempo_trabajado > 150) {
    liquidacion_final = sueldo_base + BONO * 2;
  } else {
    liquidacion_final = sueldo_base;
  }

  printf("El empleado trabajó %d horas y le corresponde un sueldo de %d",
         tiempo_trabajado, liquidacion_final);
}
