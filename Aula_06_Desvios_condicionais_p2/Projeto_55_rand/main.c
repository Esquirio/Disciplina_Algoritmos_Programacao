#include <stdio.h>  //Funções de I/O, etc.
#include <stdlib.h> // Função rand()
/* Funcão: main() */
int main()
{
  int sorteado = 0;
  //gera uma pseudo semente
  srand(time(NULL));
  //gera um numero aleatório
  sorteado = rand();
  printf("Num entre 0 e 32767: %i \n" , sorteado);
  //gera um numero aleatório entre 0 e 99
  sorteado = rand() % 100;
  printf("Num entre 0 e 99: %i \n" , sorteado);
  //gera um numero aleatório entre 1 e 100
  sorteado = rand() % 100 + 1;
  printf("Num entre 1 e 100: %i \n" , sorteado);
  //gera um numero aleatório entre 10 e 100
  sorteado = (10 +   rand() % 91);
  printf("Num entre 10 e 100: %i \n" , sorteado);
  return 0;
}//Fim da main()

