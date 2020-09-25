#include <stdio.h> // Funções de I/O
/* Funcão: main() */
int main()
{
  //Declara variaveis inteiras
  int num_01 = 0, num_02 = 0;
  printf("Digite o primeiro numero inteiro: ");
  scanf("%d", &num_01); // Ler primeiro valor
  printf("Digite o segundo numero inteiro: ");
  scanf("%d", &num_02); // Ler segundo valor
  // Imprimir resultado
  printf("Soma: %d + %d = %d. \n\n", num_01, num_02, num_01+num_02);
  return 0;
}// Fim da função main()
