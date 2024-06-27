#include <stdio.h>

#define S 50

int main() {
  int vector[S] = {0};
  int input = 0;
  int producto = 1;
  int suma = 0;
  int par;
  int impar;

  for (int i = 0; i < S; i++) {
    printf("Ingrese un valor al vector: \n");
    scanf("%d", &input);

    vector[i] = input;
  }

  for (int i = 0; i < S; i++) {
    // Suma y producto
    suma += vector[i];
    producto *= vector[i];
  }

  // Componentes índice par
  printf("Elementos de índice par: \n");
  for (int i = 0; i < S; i += 2) {
    printf("%d ", vector[i]);
  }
  // Componentes índice impar
  printf("Elementos de índice impar: \n");
  for (int i = 1; i < S; i += 2) {
    printf("%d ", vector[i]);
  }

  for (int i = S; i >= 0; i--) {
    // Imprimir al revés
    printf("%d ", vector[i]);
  }
  printf("Suma: %d \n", suma);
  printf("Producto: %d", producto);
}
