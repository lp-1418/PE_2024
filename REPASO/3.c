#include <stdio.h>

void ordenar(int sueldos[], char *analistas[]) {
  int aux = 0;
  char *aux_b = 0;
  for (int i = 0; i < 10 - 1; i++) {
    for (int j = 0; j < 10 - 1; j++) {
      if (sueldos[j] > sueldos[j + 1]) {
        aux = sueldos[j];
        aux_b = analistas[j];
        sueldos[j] = sueldos[j + 1];

        sueldos[j + 1] = aux;

        analistas[j] = analistas[j + 1];
        analistas[j + 1] = aux_b;
      }
    }
  }
}

int main() {
  char *nombre_analistas[10] = {"a1", "a2", "a3", "a4", "a5",
                                "a6", "a7", "a8", "a9", "a10"};
  int analistas[10] = {0};
  int horas_proyecto[10][15] = {0};
  int analista_1 = 0;
  int sueldos_analistas[10] = {0};
  int valor_hora = 10;
  int contador_5_horas = 0;
  int input_a, input_b, input_c;

  do {
    printf("Ingresa el número de analista (0 para salir)");
    scanf("%d", &input_a);
    if (input_a == 0) {
      break;
    }
    printf("Ingresa el número de proyecto");
    scanf("%d", &input_b);
    printf("Ingresa la cantidad de horas trabajadas en ese proyecto");
    scanf("%d", &input_c);

    analistas[input_a - 1] += input_c;
    horas_proyecto[input_a - 1][input_b - 1] = input_c;
  } while (input_a != 0);

  // sueldos
  for (int i = 0; i < 10; i++) {
    sueldos_analistas[i] = analistas[i] * valor_hora;
  }

  // ordenar
  ordenar(sueldos_analistas, nombre_analistas);

  // FIX: nro analistas que trabajaron menos de 5 hrs en algun proyecto
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 15; j++) {
      if (horas_proyecto[i][j] < 5) {
        contador_5_horas++;
        break;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("Analista: %s - Sueldo: %d \n", nombre_analistas[i],
           sueldos_analistas[i]);
  }

  printf("Cantidad de proyectos con menos de 5 horas de trabajo -> %d",
         contador_5_horas);
  return 0;
}
