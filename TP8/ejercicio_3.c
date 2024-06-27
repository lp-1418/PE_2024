#include <stdio.h>

int main() {
  int analistas_horas_total[10];
  int proyectos[15];
  int valor_hora = 10;
  int input, analista, proyecto, horas = 0;
  int menos_cinco = 0;
  // [a][b] a -> analistas b -> proyectos
  int analistas_proyectos[10][15] = {0};

  do {
    printf("Ingrese los datos a la planilla (0 para salir) \n");
    scanf("%d", &input);
    printf("Número de analista: ");
    scanf("%d", &analista);
    printf("Número de proyecto: ");
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

  } while (input != 0);
  return 0;
}
