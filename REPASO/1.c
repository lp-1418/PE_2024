#include <stdio.h>

int main() {
  int vector[20] = {0};
  int input = 0;
  int aux = 0;

  for (int i = 0; i < 20; i++) {
    printf("Ingresa un valor al vector: ");
    scanf("%d", &input);
    vector[i] = input;
  }

  // bubblesort
  for (int i = 0; i < 20 - 1; i++) {
    for (int j = 0; j < 20 - 1; j++) {
      if (vector[j] > vector[j + 1]) {
        aux = vector[j];
        vector[j] = vector[j + 1];
        vector[j + 1] = aux;
      }
    }
  }

  for (int i = 0; i < 20; i++)
    printf(" %d ", vector[i]);

  return 1;
}
