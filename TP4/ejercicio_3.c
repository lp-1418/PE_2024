#include <stdio.h>

int main() {
  int num = 0;
  int cantidad_positivos = 0;
  int cantidad_negativos = 0;
  int cantidad_ceros = 0;

  float promedio_positivos = 0;
  float promedio_negativos = 0;
  int suma_positivos = 0;
  int suma_negativos = 0;

  do {
    printf("Ingresa el valor (1111 para salir): ");
    scanf("%d", &num);

    if (num == 1111) {
      break;
    }
    if (num > 0) {
      suma_positivos += num;
      cantidad_positivos++;
    } else if (num < 0) {
      suma_negativos += num;
      cantidad_negativos++;
    } else if (num == 0) {
      cantidad_ceros++;
    }

  } while (num || num == 0);

  // Para evitar división por cero
  if (cantidad_positivos > 0) {
    promedio_positivos = suma_positivos / cantidad_positivos;
  }
  if (cantidad_negativos > 0) {
    promedio_negativos = suma_negativos / cantidad_negativos;
  }

  printf(
      "Promedio positivos: %.f \nPromedio negativos: %.f \nCantidad ceros: %d",
      promedio_positivos, promedio_negativos, cantidad_ceros);
}
