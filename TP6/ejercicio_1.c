#include <stdio.h>

int main() {
  int vector[4] = {0};
  int input = 0;
  int producto = 1;
  int suma = 0;
  int par;
  int impar;

  for (int i = 0; i < 4; i++) {
    printf("Ingrese un valor al vector: \n");
    scanf("%d", &input);

    vector[i] = input;
  }

  for (int i = 0; i < 4; i++) {
    // Suma y producto
    suma += vector[i];
    producto *= vector[i];

    // Componentes pares e impares
    if (vector[i] % 2 == 0) {
      par = vector[i];
    } else {
      impar = vector[i];
    }
  }

  for (int i = 3; i >= 0; i--) {
    // Imprimir al revés
    printf("%d", vector[i]);
  }
  printf("Suma: %d \n", suma);
  printf("Producto: %d", producto);
}
