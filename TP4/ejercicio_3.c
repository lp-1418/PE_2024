#include <stdio.h>

int main() {
  int ciclos = 0;
  int num = 0;
  int cantidad_positivos = 0;
  int cantidad_negativos = 0;
  int cantidad_ceros = 0;

  float promedio_positivos = 0;
  float promedio_negativos = 0;
  int suma_positivos = 0;
  int suma_negativos = 0;

  printf("Ingresa la cantidad de valores a ingresar");
  scanf("%d", &ciclos);

  for (int i = 0; i < ciclos; i++) {
    printf("Ingresa el valor(%d)", i + 1);
    scanf("%d", &num);

    if (num > 0) {
      suma_positivos += num;
      cantidad_positivos++;
    } else if (num < 0) {
      suma_negativos += num;
      cantidad_negativos++;
    } else {
      cantidad_ceros++;
    }
  }

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
