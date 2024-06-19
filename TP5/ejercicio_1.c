#include <stdio.h>

int main() {
  int vector[5];
  vector[0] = 10;
  vector[1] = 100;
  vector[2] = 94;
  vector[3] = 84;
  vector[4] = 11;

  for (int i = 0; i < 5; i++) {
    printf(" %d ", vector[i]);
  }

  return 0;
}
