#include <stdio.h>

int main() {
  int vector[20];
  int n = 9;
  int input = 0;
  int y, b, aux = 0;
  int size = sizeof(vector) / sizeof(vector[0]);

  for (int i = 0; i < size; i++) {
    printf("Ingresa un número: ");
    scanf("%d", &input);
    vector[i] = input;
  }

  // Bubblesort

  for (b = 0; b < n - 1; b++) {
    for (y = 0; y < n - b; y++) {

      if (vector[y] > vector[y + 1]) {
        aux = vector[y];
        vector[y] = vector[y + 1];
        vector[y + 1] = aux;
      }
    }
  }

  for (int i = 0; i < size; i++) {
    printf(" %d ", vector[i]);
  }

  return 0;
}
