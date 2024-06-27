#include <stdio.h>

#define S 5

void bubble(int vector[S]) {
  int aux = 0;
  for (int i = 0; i < S - 1; i++) {
    for (int j = 0; j < S - 1; j++) {
      if (vector[j] > vector[j + 1]) {
        aux = vector[j];
        vector[j] = vector[j + 1];
        vector[j + 1] = aux;
      }
    }
  }
}

// Auxiliar para quicksort
int partition(int vector[S], int low, int high) {
  int pivot = vector[high];
  int i = low - 1;

  for (int j = low; j <= high - 1; j++) {
    if (vector[j] < pivot) {
      i++;
      int t = vector[i];
      vector[i] = vector[j];
      vector[j] = t;
    }
  }

  int t = vector[i + 1];
  vector[i + 1] = vector[high];
  vector[high] = t;

  return (i + 1);
}

void quick(int vector[S], int low, int high) {
  if (low < high) {
    int p = partition(vector, low, high);
    quick(vector, low, p - 1);
    quick(vector, p + 1, high);
  }
}

int main() {
  int vector[S] = {5, 3, 7, 2, 1};
  int input;

  printf(
      "Selecciona el método de ordenamiento: Quicksort (1) o Bubblesort (2)");
  scanf("%d", &input);

  if (input == 1) {
    quick(vector, 0, S);
  } else if (input == 2) {
    bubble(vector);

  } else {
    printf("Error");
    return 1;
  }

  printf("Vector ordenado \n");
  for (int i = 0; i < S; i++) {
    printf("%d ", vector[i]);
  }

  return 0;
}
