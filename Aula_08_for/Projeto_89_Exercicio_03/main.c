#include <stdio.h>  //Fun��es de I/O, etc.
#include <stdlib.h>
/* fun��o main */
int main(void) {
  int num = 0; /* declara vari�vel */
  printf("Digite um numero: ");
  scanf("%i", &num);
  /* La�o for */
  printf("\nSequencia: ");
  for (int i = 1; i <= num; i++) printf("%d ", i);
  putchar('\n');
  putchar('\n');
  return 0; /* Retorna inteiro */
} /* fim da fun��o main */
