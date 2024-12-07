#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  int matriz01[3][10], matriz02[5][10], matriz03[6][6], matriz04[9][6];
  // Letra a
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      matriz01[i][j] = j;
    }
  }
  printf("Imprime Matriz Letra a:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%i ", matriz01[i][j]);
    }
    putchar('\n');
  }

  // Letra b
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 10; j++) {
      matriz02[i][j] = pow(j, 2);
    }
  }
  printf("\nImprime Matriz Letra b:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 10; j++) {
      printf("%i ", matriz02[i][j]);
    }
    putchar('\n');
  }

  // Letra c
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      matriz03[i][j] = i;
    }
  }
  printf("\nImprime Matriz Letra c:\n");
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 6; j++) {
      printf("%i ", matriz03[i][j]);
    }
    putchar('\n');
  }

  // Letra d
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 6; j++) {
      if (i % 2 == 0)
        matriz04[i][j] = -1;
      else
        matriz04[i][j] = 0;
    }
  }
  printf("\nImprime Matriz Letra d:\n");
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 6; j++) {
      printf("%2i\t", matriz04[i][j]);
    }
    putchar('\n');
  }

  return 0;
}
