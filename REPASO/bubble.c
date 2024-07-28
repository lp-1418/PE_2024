#include <stdio.h>

#define S 8
int main() {
  int arr[S] = {5, 3, 2, 7, 1, 99, 0, 124};
  int aux = 0;

  for (int i = 0; i < S - 1; i++) {
    for (int j = 0; j < S - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        aux = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = aux;
      }
    }
  }

  for (int i = 0; i < S; i++) {
    printf(" %d -", arr[i]);
  }
}
