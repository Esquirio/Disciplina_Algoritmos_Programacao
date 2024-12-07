#include <stdio.h>   //Funções de I/O, etc.
#include <stdlib.h>  // Função rand()
/* Funcão: main() */
int main() {
  int num = 0;
  // gera uma pseudo semente
  srand(time(NULL));
  // gera um numero aleatório
  num = (rand() % 100) + 1;
  // Teste numero
  if (num >= 10 && num <= 30)
    printf("Numero: %d \nEntre 10 <= num <= 30 \n", num);
  else if (num == 50)
    printf("Numero: %d \nIgual a 50 \n", num);
  else if (num >= 70)
    printf("Numero: %d \nnum >= 70 \n", num);
  else
    printf("Numero: %d \nNao esta em nenhum faixa testada!", num);
  return 0;
}  // Fim da main()
