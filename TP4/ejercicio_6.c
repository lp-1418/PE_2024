#include <stdio.h>

int main() {
  int num_auto;
  float tiempo = 0;

  int primero = 0;
  float primero_tiempo;
  int ultimo = 0;
  float ultimo_tiempo;

  do {
    printf("Ingresa el número del auto (0 para terminar): \n");
    scanf("%d", &num_auto);
    printf("Ingresa el tiempo del auto (0 para terminar): \n");
    scanf("%f", &tiempo);
    if (primero == 0 && ultimo == 0) {
      primero = num_auto;
      ultimo = num_auto;
      primero_tiempo = tiempo;
      ultimo_tiempo = tiempo;
      continue;
    } else if (tiempo < primero_tiempo && tiempo > 0) {
      primero_tiempo = tiempo;
      primero = num_auto;
    } else if (tiempo > ultimo_tiempo) {
      ultimo_tiempo = tiempo;
      ultimo = num_auto;
    }
  } while (num_auto != 0);

  printf("El primer auto fue el %d y el último fue el %d", primero, ultimo);
}
