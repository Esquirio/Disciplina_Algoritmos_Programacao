#include <stdio.h>
#include <stdlib.h>
#define LIN 5
#define COL 5
int main() {
  int matriz[LIN][COL];
  // Preenchendo a matriz
  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      if (i == j)
        matriz[i][j] = 1;
      else
        matriz[i][j] = 0;
    }
  }
  printf("Matriz digitada:\n");
  for (int i = 0; i < LIN; i++) {
    for (int j = 0; j < COL; j++) {
      printf("%i\t", matriz[i][j]);
    }
    putchar('\n');
  }
  return 0;
}
