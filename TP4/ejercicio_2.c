#include <stdio.h>

int main() {
  int num_factura;
  int suma_importes;
  int num_facturas_mil;
  int num_facturas_diez;
  int cantidad_entre;
  int importe;
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
