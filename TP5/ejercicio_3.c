#include <stdio.h>

int main() {
  int matriz[3][3] = {{100, 74, 99}, {11, 36, 68}, {23, 9, 81}};

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%d ", matriz[i][j]);
    }
  }

  return 0;
}
