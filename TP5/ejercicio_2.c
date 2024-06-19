#include <stdio.h>

int main() {
  int vector[10] = {0};
  int valor = 0;

  for (int i = 0; i < 10; i++) {
    printf("Ingresa un valor en la posición %d: ", i);
    scanf("%d", &valor);
    vector[i] = valor;
  }

  for (int b = 9; b > -1; b--) {
    printf("Posición: %d ", b);
    printf("Valor: %d \n", vector[b]);
  }
  return 0;
}
