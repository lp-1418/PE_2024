#include <stdio.h>

#define S 4

int binarySearch(int arr[], int dato) {
  int centro;
  int inf = 0;
  int sup = S - 1;

  while (inf <= sup) {
    centro = ((sup - inf) / 2) + inf;
    if (arr[centro] == dato) {
      return centro;
    } else if (dato < arr[centro]) {
      sup = centro - 1;
    } else {
      inf = centro + 1;
    }
  }

  return -1;
}

int main() {
  int arr[S] = {1, 2, 3, 4};
  // dato a buscar
  int dato = 9;

  printf("%d", binarySearch(arr, dato));

  return 0;
}
