#include <stdio.h>   //Funções de I/O, etc.
#include <stdlib.h>  // Função rand()
/* Funcão: main() */
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
}  // Fim da função main()
