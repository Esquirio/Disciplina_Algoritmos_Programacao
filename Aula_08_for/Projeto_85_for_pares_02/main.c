#include <stdio.h>
#include <stdlib.h>
/* fun��o main inicia a execu��o do programa */
int main( void )
{
  int soma = 0; /* inicializa soma */
  int numero; /* n�mero a ser acrescido � soma */

  for ( numero = 2; numero <= 100; soma += numero, numero += 2 );

  printf( "Soma eh %d\n", soma ); /* exibe soma */
  return 0; /* Retorna inteiro */
} /* fim da fun��o main */

