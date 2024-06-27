#include <stdio.h>

int main() {
  int analistas_horas_total[10] = {0};
  int proyectos_horas_total[15] = {0};
  int input, analista, proyecto, horas = 0;
  int menos_cinco = 0;
  // [a][b] a -> analistas b -> proyectos
  int analistas_proyectos[10][15] = {0};
  int analista_proyecto_1 = 0;
  int sueldos_analistas[10] = {0};
  char *nombres_analistas[10] = {"A1", "A2", "A3", "A4", "A5",
                                 "A6", "A7", "A8", "A9", "A10"};
  int numero_analistas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int valor_hora[10] = {5, 10, 10, 6, 12, 15, 5, 19, 6, 7};
  int aux_a, aux_c = 0;
  char *aux_b;

  printf("Ingrese los datos a la planilla - 0 para salir \n");
  do {
    // Ingreso de datos
    printf("Número de analista (1 al 10): ");
    scanf("%d", &analista);
    if (analista == 0) {
      break;
    }
    printf("Número de proyecto (1 al 15): ");
    scanf("%d", &proyecto);
    printf("Cantidad de hs trabajadas en el proyecto: ");
    scanf("%d", &horas);

    // Total de horas trabajadas por analista
    analistas_horas_total[analista] += horas;
    // Cantidad horas trabajadas por x analista en x proyecto
    analistas_proyectos[analista][proyecto] = horas;
    // Cantidad de analistas que trabajaron < 5 horas en un proyecto
    if (horas < 5) {
      menos_cinco++;
    }
    // Total hs trabajadas en cada proyecto
    proyectos_horas_total[proyecto] += horas;

  } while (analista != 0);

  // Analista que trabajó menos proyecto 1
  for (int i = 0; i < 9; i++) {
    if (analistas_proyectos[i][0] < analistas_proyectos[i + 1][0]) {
      analista_proyecto_1 = i;
    }
  }
  printf("Nro analista que trabajó menos proyecto 1: %d", analista_proyecto_1);

  // Sueldo de cada analista
  for (int i = 0; i < 10; i++) {
    sueldos_analistas[i] = analistas_horas_total[i] * valor_hora[i];
  }

  // Order forma des por sueldo - nombre - valor hora
  for (int i = 0; i < 10 - 1; i++) {
    for (int j = 0; j < 10 - 1; j++) {
      if (sueldos_analistas[j] < sueldos_analistas[j + 1]) {
        // Ordenar sueldo
        aux_a = sueldos_analistas[j];
        sueldos_analistas[j] = sueldos_analistas[j + 1];
        sueldos_analistas[j + 1] = aux_a;
        // Ordenar nombres
        aux_b = nombres_analistas[j];
        nombres_analistas[j] = nombres_analistas[j + 1];
        nombres_analistas[j + 1] = aux_b;
        // Ordenar valor hora
        aux_c = valor_hora[j];
        valor_hora[j] = valor_hora[j + 1];
        valor_hora[j + 1] = aux_c;
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("Sueldo: %d -Nombre: %s - Valor hora: %d \n", sueldos_analistas[i],
           nombres_analistas[i], valor_hora[i]);
  }

  return 0;
}
