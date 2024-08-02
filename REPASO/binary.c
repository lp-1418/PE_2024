#include <stdio.h>

#define S 9

int binarySearch(int arr[], int dato) {
  int centro;
  int inf = 0;
  int sup = S - 1;

  while (inf <= sup) {
    centro = ((sup - inf) / 2) + inf;
    printf("%d", centro);
    if (arr[centro] == dato) {
      printf("dato encontrado \n");
      return centro;
    } else if (dato < arr[centro]) {
      printf("búsqueda superior \n");
      sup = centro - 1;
    } else {
      printf("búsqueda inferior \n");
      inf = centro + 1;
    }
  }

  return -1;
}

int main() {
  int arr[S] = {1, 2, 3, 4, 6, 7, 8, 9, 22};
  // dato a buscar
  int dato = 3;

  printf("%d", binarySearch(arr, dato));

  return 0;
}
