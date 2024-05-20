#include <stdio.h>

int main() {
  int suma_sueldos = 0;
  int cant_sueldos = 0;
  int sueldo = 0;
  char carga;
  float promedio = 0;

  do {
    printf("Ingresa el sueldo: ");
    scanf("%d", &sueldo);

    suma_sueldos += sueldo;
    cant_sueldos++;

    printf("Desea ingresar otro sueldo S/N:");
    scanf(" %c", &carga);
  } while (carga == 'S' || carga == 's');

  promedio = suma_sueldos / cant_sueldos;

  printf("La suma de los sueldos es: %d \nEl promedio es %.f", suma_sueldos,
         promedio);

  return 0;
}
