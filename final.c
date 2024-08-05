#include <stdio.h>

void ingresarCalificaciones(float calificaciones[100][5],
                            int cantidadEstudiantes);
void calcularPromedioPorEstudiante(float calificaciones[100][5],
                                   int cantidadEstudiantes,
                                   float promediosEstudiantes[100]);
void mostrarPromedioEstudiante(float promediosEstudiantes[100],
                               int cantidadEstudiantes);
void mostrarPromedioMateria(int promedios[], int cantidadMaterias);
void calcularPromedioPorMateria(float calificaciones[100][5],
                                int cantidadMaterias, int cantidadEstudiantes,
                                int promedios[]);
void bubbleSort(int promedios[], int cantidadMaterias);

int main() {
  int cantidadEstudiantes;
  int cantidadMaterias = 5;
  // recordar -> [estudiantes][materias]
  float calificaciones[100][5] = {0};
  float promediosEstudiantes[100] = {0};
  float promediosMaterias[cantidadMaterias];
  int promedios[cantidadMaterias];

  printf("Ingrese cantidad de estudiantes");
  scanf("%d", &cantidadEstudiantes);

  // Carga notas
  ingresarCalificaciones(calificaciones, cantidadEstudiantes);
  // Calcular promedios por estudiante
  calcularPromedioPorEstudiante(calificaciones, cantidadEstudiantes,
                                promediosEstudiantes);
  // Calcular promedio de cada materia
  calcularPromedioPorMateria(calificaciones, cantidadMaterias,
                             cantidadEstudiantes, promedios);
  // Ordernar promedios
  bubbleSort(promedios, cantidadMaterias);

  // Mostrar promedios
  mostrarPromedioMateria(promedios, cantidadMaterias);
  mostrarPromedioEstudiante(promediosEstudiantes, cantidadEstudiantes);
  return 0;
}

void ingresarCalificaciones(float calificaciones[100][5],
                            int cantidadEstudiantes) {
  float input = 0;
  for (int estudiante = 0; estudiante < cantidadEstudiantes; estudiante++) {
    printf("Estudiante %d:\n", estudiante + 1);
    for (int materia = 0; materia < 5; materia++) {
      printf("Ingrese la nota para la materia %d: ", materia + 1);
      scanf("%f", &input);
      calificaciones[estudiante][materia] = input;
    }
  }
}

void calcularPromedioPorMateria(float calificaciones[100][5],
                                int cantidadMaterias, int cantidadEstudiantes,
                                int promedios[]) {
  float cal[5] = {0};
  for (int i = 0; i < cantidadEstudiantes; i++) {
    for (int j = 0; j < cantidadMaterias; j++) {
      cal[j] += calificaciones[i][j];
    }
  }

  for (int i = 0; i < cantidadMaterias; i++) {
    promedios[i] = cal[i] / cantidadEstudiantes;
  }
}

void calcularPromedioPorEstudiante(float calificaciones[100][5],
                                   int cantidadEstudiantes,
                                   float promediosEstudiantes[100]) {
  for (int estudiante = 0; estudiante < cantidadEstudiantes; estudiante++) {
    float suma = 0;
    for (int materia = 0; materia < 5; materia++) {
      suma += calificaciones[estudiante][materia];
    }
    promediosEstudiantes[estudiante] = suma / 5;
  }
}

void mostrarPromedioEstudiante(float promediosEstudiantes[100],
                               int cantidadEstudiantes) {
  printf("\nCalificación promedio de los estudiantes:\n");
  for (int i = 0; i < cantidadEstudiantes; i++) {
    printf("Nro. de Estudiante: %d, Calificación Promedio: %.2f\n", i + 1,
           promediosEstudiantes[i]);
  }
}

void bubbleSort(int promedios[], int cantidadMaterias) {
  int aux = 0;
  for (int i = 0; i < cantidadMaterias - 1; i++) {
    for (int j = 0; j < cantidadMaterias - 1; j++) {
      if (promedios[j] < promedios[j + 1]) {
        aux = promedios[j];
        promedios[j] = promedios[j + 1];
        promedios[j + 1] = aux;
      }
    }
  }
}

void mostrarPromedioMateria(int promedios[], int cantidadMaterias) {
  printf("Promedios por materia: \n");
  for (int i = 0; i < cantidadMaterias; i++) {
    printf(" %d ", promedios[i]);
  }
}
