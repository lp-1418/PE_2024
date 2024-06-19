#include <stdio.h>

// TODO  Porcentual facturado por cada mozo sobre
// el total -  Mozo que atendió a más personas

int main() {
  int mozos[6] = {0};
  int mozos_facturaciones[6] = {0};
  int mozos_comisiones[6] = {0};
  int mesas_transito[12] = {0};
  int mesas_monto[12] = {0};
  int total_facturas = 0;
  int num_factura = 0;
  int num_mesa = 0;
  int cantidad_facturas = 0;
  int caja_total = 0;
  int monto = 0;
  int facturas_45 = 0;
  int num_comensales = 0;
  int num_mozo = 0;
  int max_atencion = 0;

  do {
    printf("Ingrese el número de factura (0 para terminar): ");
    scanf("%d", &num_factura);
    printf("Ingrese el número de mozo (0 a 5)");
    scanf("%d", &num_mozo);
    printf("Ingrese el número de mesa (0 a 11)");
    scanf("%d", &num_mesa);
    printf("Ingrese el número de comensales: ");
    scanf("%d", &num_comensales);
    printf("Ingrese el total de la cuenta");
    scanf("%d", &monto);

    // Contador facturas > 45
    if (monto > 45) {
      facturas_45++;
    }
    // Cantidad de comensales que atendió cada mozo
    mozos[num_mozo] += num_comensales;
    // Monto por mesa
    mesas_monto[num_mesa] += monto;
    // Cálculo caja total
    caja_total += monto;
    // Cantidad de veces que se facturó la mesa
    mesas_transito[num_mesa] += 1;
    // Cantidad total de facturas
    cantidad_facturas++;
    // Ganancias y facturacion por mozo
    mozos_facturaciones[num_mozo] += monto;
    mozos_comisiones[num_mozo] += (100 * monto) / 5;

  } while (num_factura != 0);

  for (int i = 0; i < 6; i++) {
    if (mozos[i] > max_atencion) {
      max_atencion = mozos[i];
    }
  }

  return 0;
}
