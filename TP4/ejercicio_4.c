#include <stdio.h>

int main() {
  int num_factura;
  int num_art;
  int cantidad_vendida;
  int precio_unitario = 0, total_ventas = 0;
  int total_art_1 = 0, total_art_2 = 0, total_art_3 = 0;

  do {
    printf("Ingrese número de factura (0 para terminar): ");
    scanf("%d", &num_factura);
    if (num_factura == 0)
      break;
    printf("Ingrese número de artículo: ");
    scanf("%d", &num_art);
    printf("Ingrese cantidad vendida: ");
    scanf("%d", &cantidad_vendida);
    printf("Ingrese precio unitario: ");
    scanf("%d", &precio_unitario);

    switch (num_art) {
    case 1:
      total_art_1 += cantidad_vendida;
      total_ventas += cantidad_vendida * precio_unitario;
      break;
    case 2:
      total_art_2 += cantidad_vendida;
      total_ventas += cantidad_vendida * precio_unitario;
      break;
    case 3:
      total_art_3 += cantidad_vendida;
      total_ventas += cantidad_vendida * precio_unitario;
      break;
    };
  } while (num_factura != 0);

  printf("Número artículo: 1 \nCantidad vendida: %d \nNúmero artículo: 2 "
         "\nCantidad vendida: %d \nNúmero artículo: 3 \nCantidad vendida: %d "
         "\n Total ventas: %d",
         total_art_1, total_art_2, total_art_3, total_ventas);
}
