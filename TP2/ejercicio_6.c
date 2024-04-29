#include <stdio.h>

int main() {
  int edad_1 = 0;
  int altura_1 = 0;
  int edad_2 = 0;
  int altura_2 = 0;

  printf("Ingresa la edad y altura de las personas \n edad 1: ");
  scanf("%d", &edad_1);
  printf("altura 1: ");
  scanf("%d", &altura_1);
  printf("edad 2: ");
  scanf("%d", &edad_2);
  printf("altura 2: ");
  scanf("%d", &altura_2);

  if (altura_2 == altura_1) {
    printf("Tienen la misma altura de %d", altura_1);
  } else if (edad_2 > edad_1) {
    printf("La segunda persona tiene una edad mayor y una altura de %d",
           altura_2);
  } else {
    printf("La primera persona tiene una edad mayor y una altura de %d",
           altura_1);
  }
}
