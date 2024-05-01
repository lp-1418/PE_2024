#include <stdio.h>

int main() {
  int patente = 0;
  int multa = 0;
  int multas_mayores = 0;
  int total_cobrado = 0;
  int suma_mayores = 0;
  float promedio = 0;

  // TODO: Fix loop 50
  for (int i = 0; i < 4; i++) {
    printf("Ingrese la patente: ");
    scanf("%d", &patente);
    printf("Ingrese el monto a pagar de la multa: ");
    scanf("%d", &multa);

    total_cobrado += multa;

    if (multa > 40) {
      multas_mayores++;
      suma_mayores += multa;
    }
  }

  // TODO: promedio

  printf("Hay %d multas mayores a $40 \nTotal cobrado $%d \nTotal cobrado en "
         "multas mayores a $40: %d",
         multas_mayores, total_cobrado, suma_mayores);
}
