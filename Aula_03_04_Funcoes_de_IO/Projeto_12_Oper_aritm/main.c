/* ---------------------
 INTRODUÇÃO LINGUAGEM C
------------------------ */
#include <stdio.h> // Funções de I/O
/* Função main() inicia o programa */
int main()
{
  printf("Precedencia: %d\n", 10/2+3);
  printf("Alterando a precedencia: %d\n\n", 8/(2+3));

  printf("Divisao inteira: %d\n", 9/2);
  printf("Divisao real: %f\n", 9/2.0);
  printf("Divisao real: %f\n", 9.0/2);
  printf("Divisao real: %f\n\n", 9.0/2.0);

  printf("Resto da divisao inteira: %d\n", 9%2);
  printf("Resto da divisao inteira: %d\n", 8%2);
  printf("Resto da divisao inteira: %d\n\n", 9%5);
  return 0;
}// Fim da função main()


