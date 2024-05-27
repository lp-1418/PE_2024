#include <stdio.h>

int main() {
  int dia = 0, mes = 0, anio = 0;
  int bisiesto = 0;
  int valida = 0;

  printf("Ingresa una fecha (dd mm aaaa)\n");
  printf("Ingresa el día (dd): ");
  scanf("%d", &dia);
  printf("Ingresa el mes (mm): ");
  scanf("%d", &mes);
  printf("Ingresa el año (aaaa): ");
  scanf("%d", &anio);

  if (mes < 1 || mes > 12) {
    valida = 0;
    printf("Fecha inválida");
    return 0;
  }

  if ((anio % 4 == 0 && anio % 100 != 0) ||
      (anio % 100 == 0 && anio % 400 == 0)) {

    bisiesto = 1;
  } else {
    bisiesto = 0;
  }

  switch (mes) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    if (dia <= 31) {
      valida = 1;
    }
    break;
  case 4:
  case 6:
  case 9:
  case 11:
    if (dia <= 30) {
      valida = 1;
    }
    break;
  case 2:
    if (bisiesto == 1) {
      if (dia <= 29) {
        valida = 1;
      }
    } else {
      if (dia <= 28) {
        valida = 1;
      }
    }
    break;
  default:
    return 0;
  }

  if (valida == 1) {
    printf("Fecha válida %d-%d-%d", dia, mes, anio);
  } else {
    printf("Fecha inválida. Intenta de nuevo");
  }

  return 1;
}
