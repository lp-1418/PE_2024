#include <stdio.h>

#define S 15

void sumar(int array[S], int *suma) {
  for (int i = 0; i < S; i++) {
    *suma += array[i];
  }
}

void bubble(int array[S]) {
  int aux = 0;
  for (int i = 0; i < S - 1; i++) {
    for (int j = 0; j < S - 1; j++) {
      if (array[j] > array[j + 1]) {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }
}

void minMax(int array[S], int *min, int *max) {
  *min = array[0];
  for (int i = 0; i < S; i++) {
    if (array[i] < *min) {
      *min = array[i];
    }
    if (array[i] > *max) {
      *max = array[i];
    }
  }
}

int main() {
  int array[S] = {0};
  int input = 0;
  int suma = 0;
  int max = 0;
  int min = 0;

  for (int i = 0; i < S; i++) {
    printf("Ingresa un número entero (00 para salir): ");

    scanf("%d", &input);
    if (input == 00) {
      break;
    }
    array[i] = input;
  }

  // Min y Max
  minMax(array, &min, &max);

  printf("Array desordenado: \n");
  for (int i = 0; i < S; i++) {
    printf(" %d ", array[i]);
  }

  // Ordenamiento
  bubble(array);
  printf("Array ordenado: \n");
  for (int i = 0; i < S; i++) {
    printf(" %d ", array[i]);
  }

  // Suma
  sumar(array, &suma);

  // Resultados
  printf("Resultado suma: %d \n", suma);
  printf("Valor mínimo: %d \n", min);
  printf("Valor máximo: %d \n", max);

  return 0;
}
