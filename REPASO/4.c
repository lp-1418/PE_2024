#include <stdio.h>

void bubbleSort(int a[]);
int busquedaBinaria(int a[], int dato);
int busquedaSecuencial(int a[], int dato);

int main() {
  int vector[10] = {2, 3, 6, 7, 1, 9, 12, 24, 54, 65};
  int input = 0;
  int num = 0;

  bubbleSort(vector);

  printf("Ingresa número a buscar: \n");
  scanf("%d", &num);
  printf("Ingresar número búsqueda -> 1 para binaria - 2 para secuencial \n");
  scanf("%d", &input);
  if (input == 1) {
    int resultado = busquedaBinaria(vector, num);
    printf("posición ->  %d", resultado);
  } else if (input == 2) {
    int resultado = busquedaSecuencial(vector, num);
    printf("posición -> %d", resultado);
  }
  return 0;
}

void bubbleSort(int a[]) {
  int aux = 0;
  for (int i = 0; i < 10 - 1; i++) {
    for (int j = 0; j < 10 - 1; j++) {
      if (a[j] > a[j + 1]) {
        aux = a[j];
        a[j] = a[j + 1];
        a[j + 1] = aux;
      }
    }
  }
}

int busquedaBinaria(int a[], int dato) {
  int n = 10;
  int centro, inf = 0, sup = n - 1;

  while (inf <= sup) {
    centro = ((sup - inf) / 2) + inf;
    if (a[centro] == dato) {
      return centro;
    } else if (dato < a[centro]) {
      sup = centro - 1;
    } else {
      inf = centro + 1;
    }
  }
  return -1;
}

int busquedaSecuencial(int a[], int dato) {
  for (int i = 0; i < 10; i++) {
    if (a[i] == dato) {
      return i;
    }
  }
  return -1;
}
