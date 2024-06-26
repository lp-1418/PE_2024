#include <stdio.h>

int main() {
  int vector[11] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
  int suma = 0;

  // suma = vector[0] + vector[1] + vector[2] + vector[3] + vector[4] +
  // vector[5] +
  //        vector[6] + vector[7] + vector[8] + vector[9] + vector[10];

  for (int i = 0; i < 11; i++) {
    suma += vector[i];
  }

  printf("%d", suma);

  return 0;
}
