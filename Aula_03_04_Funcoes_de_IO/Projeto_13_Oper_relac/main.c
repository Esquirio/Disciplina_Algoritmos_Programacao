/* ---------------------
 INTRODUÇÃO LINGUAGEM C
------------------------ */
#include <stdio.h> // Funções de I/O
/* Função main() inicia o programa */
int main()
{
  int num_01, num_02, num_03, num_04;
  num_01 = num_02 = 2;
  num_03 = 4;
  num_04 = 5;
  printf("Op. Igualdade(%d==%d?): %d \n", num_01, num_02, num_01==num_02);
  printf("Op. Igualdade(%d==%d?): %d \n\n", num_02, num_04, num_03==num_04);

  printf("Op. Diferença(%d!=%d?): %d \n", num_01, num_02, num_01!=num_02);
  printf("Op. Diferença(%d!=%d?): %d \n\n", num_02, num_04, num_03!=num_04);

  printf("Op. Menor que(%d<%d?): %d \n", num_01, num_02, num_01<num_02);
  printf("Op. Menor que(%d<%d?): %d \n\n", num_02, num_04, num_03<num_04);

  printf("Op. Maior que(%d>%d?): %d \n", num_01, num_02, num_01>num_02);
  printf("Op. Maior que(%d>%d?): %d \n\n", num_02, num_04, num_03>num_04);
  return 0;
}// Fim da função main()


