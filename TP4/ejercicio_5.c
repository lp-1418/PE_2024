#include <stdio.h>

int main() {
  int temperatura = 0;
  int temp_menor = 0;
  int temp_mayor = 0;

  do {
    printf("Ingrese una temperatura (1000 para terminar): ");
    scanf("%d", &temperatura);

    if (temp_menor == 0 && temp_mayor == 0) {
      temp_menor = temperatura;
      temp_mayor = temperatura;
    }

    if (temperatura < temp_menor) {
      temp_menor = temperatura;
    } else if (temperatura > temp_mayor) {
      temp_mayor = temperatura;
    }
  } while (temperatura < 1000);

  printf("La temperatura menor fue de %d grados y la mayor de %d grados",
         temp_menor, temp_mayor);
}
