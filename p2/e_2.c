#include <stdio.h>

int main() {
  int cursosMeses[5][12] = {0};
  int input = 0;
  int curso = 0;
  int mes = 0;
  int cal = 0;
  float prom_cursos[5] = {0};
  int suma_cursos[5] = {0};
  int suma_meses[12] = {0};
  int promedio_cursos[5] = {0};
  int promedio_meses[12] = {0};

  do {
    printf("Ingresa las calificaciones para los cursos (1 al 5) y meses (1 al "
           "12) \n");
    printf("Ingresa el curso (00 para salir): ");
    scanf("%d", &curso);
    if (curso == 00) {
      break;
    }
    printf("Ingresa el mes: ");
    scanf("%d", &mes);
    printf("Ingresa la calificación: ");
    scanf("%d", &cal);
    if (curso < 1 || curso > 5 || mes < 1 || mes > 12) {
      printf("Curso o mes inválido. Intenta de nuevo.\n");
      continue;
    }
    cursosMeses[curso - 1][mes - 1] = cal;
  } while (curso != 00);

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 12; j++) {
      suma_cursos[i] += cursosMeses[i][j];
      suma_meses[j] += cursosMeses[i][j];
    }
  }

  for (int i = 0; i < 5; i++) {
    promedio_cursos[i] = (float)suma_cursos[i] / 12;
  }

  for (int i = 0; i < 12; i++) {
    promedio_meses[i] = (float)suma_meses[i] / 5;
  }

  // Promedio cursos
  for (int i = 0; i < 5; i++) {
    printf("Promedio curso %d -> %d \n", i + 1, promedio_cursos[i]);
  }
  // Promedio mes
  for (int i = 0; i < 12; i++) {
    printf("Promedio mes %d -> %d \n", i + 1, promedio_meses[i]);
  }
  return 0;
}
