#include <stdio.h>

int main() {
  int num = 0;
  int positivos = 0;
  int negativos = 0;
  int base = 0;

  for (int i = 0; i < 10; i++) {
    printf("Ingresa el valor(%d)", i + 1);
    scanf("%d", &num);

    if (num > 0) {
      positivos += 1;
    } else if (num < 0) {
      negativos += 1;
    } else {
      base += 1;
    }
  }

  printf("Números positivos: %d, números negativos: %d, números base(0): %d",
         positivos, negativos, base);
}
