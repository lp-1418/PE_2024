#include <stdio.h>
int main() {
  int meses[12][2] = {
      {1, 31}, {2, 28}, {3, 30}, {4, 30},  {5, 31},  {6, 30},
      {7, 31}, {8, 31}, {9, 30}, {10, 31}, {11, 30}, {12, 31},
  };
  int input = 0;
  int dias = 0;

  printf("Ingrese un més (1 al 12): ");
  scanf("%d", &input);

  dias = meses[input - 1][1];

  printf("Número de días del mes %d: %d", input, dias);

  return 0;
}
