#include <stdio.h>

int main() {
  int num_factura = 0, suma_importes = 0;
  int num_facturas_mil = 0;
  int num_facturas_diez = 0;
  int cantidad_entre = 0;
  int importe = 0;
  do {
    printf("Ingrese número de factura: ");
    scanf("%d", &num_factura);
    printf("Ingrese importe de la factura: ");
    scanf("%d", &importe);

    if (importe > 1000) {
      num_facturas_mil++;
    }

    if (importe > 10000) {
      num_facturas_diez++;
    }

    if (importe >= 400 && importe <= 700) {
      cantidad_entre++;
    }

    suma_importes += importe;
  } while (num_factura != 0);

  printf("El importe total de las facturas es de: %d \n%d factura(s) superan "
         "los $1000 \n%d factura(s) superan los $10.000",
         suma_importes, num_facturas_mil, num_facturas_diez);
}
