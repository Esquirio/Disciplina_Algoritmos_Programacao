#include <stdio.h>   //Fun��es de I/O, etc.
#include <stdlib.h>  // Fun��o rand()
/* Func�o: main() */
int main() {
  int numSorteado = 0;
  // gera uma pseudo semente
  srand(time(NULL));
  // gera o primeiro numero aleatorio
  numSorteado = rand();
  printf("Primeiro numero: %i \n", numSorteado);
  // gera o segundo numero aleatorio
  numSorteado = rand();
  printf("Segundo numero: %i \n", numSorteado);
  // gera o terceiro numero aleatorio
  numSorteado = rand();
  printf("Terceiro numero: %i \n", numSorteado);
  return 0;
}  // Fim da fun��o main()
