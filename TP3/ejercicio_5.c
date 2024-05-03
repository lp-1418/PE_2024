#include <stdio.h>

int main() {
  int patente = 0;
  int multa = 0;
  int multas_mayores = 0;
  int total_cobrado = 0;
  int suma_mayores = 0;
  float porcentaje = 0;
  int ciclos = 50;

  for (int i = 0; i < ciclos; i++) {
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

  porcentaje = (suma_mayores * 100) / total_cobrado;

  printf("Hay %d multas mayores a $40 \nTotal cobrado $%d \nTotal cobrado en "
         "multas mayores a $40: %d \nRepresentan el %.f por ciento del total "
         "recaudado",
         multas_mayores, total_cobrado, suma_mayores, porcentaje);
}
