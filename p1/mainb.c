#include <stdio.h>

int main() {

  int cant_carne = 0, cant_pollo = 0, cant_jq = 0, total_empanadas = 0,
      costo = 0, cant_docena = 0, cant_individual = 0, gusto = 0, cantidad = 0;

  printf("Gustos disponibles: Carne (1), Pollo (2), Jamón y queso (3) ------ "
         "(0 para terminar el pedido) \n");

  printf("Ingrese el gusto: ");
  scanf("%d", &gusto);

  while (gusto != 0) {

    printf("Ingrese la cantidad: ");
    scanf("%d", &cantidad);

    switch (gusto) {
    case 1:
      cant_carne += cantidad;
      break;
    case 2:
      cant_pollo += cantidad;
      break;
    case 3:
      cant_jq += cantidad;
      break;
    default:
      printf("Gusto no válido. \n");
    }
    printf("Ingrese el gusto (0 para terminar): ");
    scanf("%d", &gusto);
  };

  total_empanadas = cant_carne + cant_pollo + cant_jq;

  cant_docena = total_empanadas / 12;
  cant_individual = total_empanadas % 12;

  costo = (cant_docena * 1000) + (cant_individual * 100);

  printf("Cantidad de carne (%d), de pollo (%d) y de jamón y queso (%d)\n",
         cant_carne, cant_pollo, cant_jq);
  printf("Cantidad total de empanadas: %d \n", total_empanadas);
  printf("Docenas: %d - Sueltas: %d \n", cant_docena, cant_individual);
  printf("El costo del pedido es: %d", costo);

  return 1;
}
