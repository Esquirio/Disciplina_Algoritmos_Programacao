#include <stdio.h>  //Fun��es de I/O, etc.
#include <stdlib.h> // Fun��o rand()
/* Func�o: main() */
int main()
{
  int sorteado = 0;
  //gera uma pseudo semente
  srand(time(NULL));
  //gera um numero aleat�rio entre 0 e 1 (ponto flutuante)
  printf("Num real entre 0 e 1: %.2f \n\n" , (float)rand() / (float)RAND_MAX);
  printf("Valor maximo: %d \n\n", RAND_MAX);
  printf("Num real entre 0 e 32767: %.2f \n\n" , (float)rand());
  return 0;
}//Fim da main()


