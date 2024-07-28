#include <stdio.h>

#define S 4
int main() {
  int arr[S] = {2, 5, 3, 1};
  int dato = 3;
  int posicion = 0;

  for (int i = 0; i < S; i++) {
    if (arr[i] == dato) {
      posicion = i;
    }
  }

  printf("%d", posicion);
}
