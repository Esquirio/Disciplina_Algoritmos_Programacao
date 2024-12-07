#include <stdio.h>  //Funções de I/O, etc.
#include <stdlib.h>
/* função main */
int main(void) {
  int num = 0; /* declara variável */
  printf("Digite um numero: ");
  scanf("%i", &num);
  /* Laço for */
  printf("\nSequencia: ");
  for (int i = 1; i <= num; i++) printf("%d ", i);
  putchar('\n');
  putchar('\n');
  return 0; /* Retorna inteiro */
} /* fim da função main */
