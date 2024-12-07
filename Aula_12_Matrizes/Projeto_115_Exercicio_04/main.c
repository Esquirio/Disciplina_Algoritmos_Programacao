#include <stdio.h>
#include <stdlib.h>
#define LIN 10
#define COL 10
int main() {
  int numeros[LIN][COL];
  srand(time(0));  // Semente do algoritmo
  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      numeros[i][j] = rand() % 101;
    }
  }
  printf("Imprimindo Matriz\n");
  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      printf("%3i ", numeros[i][j]);
    }
    putchar('\n');
  }

  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      if (numeros[i][j] % 2 == 0)
        numeros[i][j] = 0;
      else
        numeros[i][j] = -1;
    }
  }
  printf("\n\nImprimindo Matriz\n");
  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      printf("%3i ", numeros[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
