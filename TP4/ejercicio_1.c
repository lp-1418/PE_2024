#include <stdio.h>

int main() {
  int ciclos = 0;
  int suma_sueldos = 0;
  int sueldo = 0;
  float promedio = 0;

  printf("¿Cuántos sueldos deseas ingresar?");
  scanf("%d", &ciclos);

  for (int i = 0; i < ciclos; i++) {
    printf("Ingresa el sueldo (%d)", i + 1);
    scanf("%d", &sueldo);

    suma_sueldos += sueldo;
  }

  promedio = suma_sueldos / ciclos;

  printf("La suma de los sueldos es: %d \nEl promedio es %.f", suma_sueldos,
         promedio);
}
