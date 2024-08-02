#include <stdio.h>
#define S 10

void ordenar(int a[]) {
  int aux = 0;

  for (int i = 0; i < S - 1; i++) {
    for (int j = 0; j < S - 1; j++) {
      if (a[j] > a[j + 1]) {
        aux = a[j];
        a[j] = a[j + 1];
        a[j + 1] = aux;
      }
    }
  }
}

int busquedaBinaria(int a[], int b) {
  int n = 10;
  int iteraciones = 0;
  int centro, inf = 0, sup = n - 1;

  while (inf <= sup) {
    iteraciones++;
    centro = ((sup - inf) / 2) + inf;
    if (a[centro] == b) {
      return centro;
    } else {
      if (b < a[centro]) {
        sup = centro - 1;
      } else {
        inf = centro + 1;
      }
    }
  }
  return -1;
}

int busquedaSecuencial(int a[], int b) {
  int i;
  for (i = 0; i < 10; i++) {
    if (a[i] == b) {
      return i;
    }
  }
  printf("Total iteraciones %d", i);
  return -1;
}

void analizarResultado(int resultado) {
  if (resultado >= 0) {
    printf("El dato se encuentra en posición %d \n", resultado);
  } else {
    printf("No se encontró el dato \n");
  }
}

int main() {
  int vector[10] = {0};
  int input = 0;
  int search;

  for (int i = 0; i < 10; i++) {
    printf("Ingrese un número al vector: ");
    scanf("%d", &input);
    vector[i] = input;
  }

  ordenar(vector);

  printf("Número a buscar: ");
  scanf("%d", &input);
  printf("Tipo de búsqueda a realizar -> binaria (1) - secuencial (2)");
  scanf("%d", &search);
  if (search == 1) {
    int resultado = busquedaBinaria(vector, input);
    analizarResultado(resultado);
  } else if (search == 2) {
    int resultado2 = busquedaSecuencial(vector, input);
    analizarResultado(resultado2);
  }

  return 1;
}
