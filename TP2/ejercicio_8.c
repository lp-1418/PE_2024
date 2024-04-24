#include <stdio.h>

int main() {
  int dia = 0;
  int mes = 0;
  int año = 0;

  printf("Ingresa una fecha \n dia: ");
  scanf("%d", &dia);
  printf("mes: ");
  scanf("%d", &mes);
  printf("año: ");
  scanf("%d", &año);

  if ((dia > 0 && dia <= 31) && (mes > 0 && mes < 13) && año > 0) {
    printf("Fecha válida \n");

    if ((año % 4 == 0 && año % 100 != 0) ||
        (año % 100 == 0 && año % 400 == 0)) {
      printf("%d es un año bisiesto", año);
    } else {
      printf("Año no bisiesto");
    }

  } else {
    printf("Fecha inválida");
  }
}
