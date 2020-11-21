#include <stdio.h>
#include <stdlib.h>
#define LIN 4
#define COL 4
int main()
{
  int matriz[LIN][COL], contador = 0;
  printf("Digite a Matriz\n");
  for(int i = 0; i < LIN; i++){
    for (int j = 0; j < COL; j++){
      printf("Digite o elemento[%i][%i]: ", i, j);
      scanf("%i", &matriz[i][j]);
      if(matriz[i][j] >= 10)
        contador++;
    }
  }
  printf("Matriz digitada:\n");
  for(int i = 0; i < LIN; i++){
    for(int j = 0; j < COL; j++){
      printf("%i\t", matriz[i][j]);
    }
    putchar('\n');
  }
  printf("\nTotal de elementos >= 10: %i \n", contador);

  return 0;
}
