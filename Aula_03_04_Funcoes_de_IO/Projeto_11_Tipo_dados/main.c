/* ---------------------
 INTRODUÇÃO LINGUAGEM C
------------------------ */
#include <stdio.h>  // Funções de I/O
/* Função main() inicia o programa */
int main() {
  short int num_01 = 32767;
  unsigned short int num_02 = 65535;
  int num_03 = 2147483647;
  float valor_01 = 62.5825;
  double valor_02 = 28;
  printf("Limite do short int: %hi \n", num_01);
  printf("Ultrapassou o limite: %hi \n\n", num_01 + 1);

  printf("Limite do ushort int: %hu \n", num_02);
  printf("Ultrapassou o limite: %hu \n\n", num_02 + 1);

  printf("Limite do int: %d \n", num_03);
  printf("Ultrapassou o limite: %d \n\n", num_03 + 1);

  printf("Imprime float: %f \n", valor_01);
  printf("Imprime float com uma casa decimal: %.1f \n", valor_01);
  printf("Imprime float com duas casas decimais: %.2f \n\n", valor_01);

  printf("Imprime double: %lf \n", valor_02);
  printf("Imprime double com uma casa decimal: %.1lf \n", valor_02);
  printf("Imprime double com duas casas decimais: %.2lf \n\n", valor_02);
  return 0;  // Retorna um valor inteiro
}  // Fim da função main()
