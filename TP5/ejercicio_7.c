#include <stdio.h>

#define F 2
#define C 2

int main() {
  int matriz_a[F][C] = {0};
  int matriz_b[F][C] = {0};
  int producto_a = 1;
  int producto_b = 1;
  int input = 0;

  for (int i = 0; i < F; i++) {
    for (int j = 0; j < F; j++) {
      printf("Ingrese un número (matriz a): ");
      scanf("%d", &input);
      matriz_a[i][j] = input;
    }
  }

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      printf("Ingrese un número (matriz b)");
      scanf("%d", &input);
      matriz_b[i][j] = input;
    }
  }

  for (int i = 0; i < C; i++) {
    for (int j = 0; j < C; j++) {
      producto_a *= matriz_a[i][j];
      producto_b += matriz_b[i][j];
    }
  }
  printf("Producto A -> %d", producto_a);

  printf("Producto B -> %d", producto_b);

  return 0;
}
