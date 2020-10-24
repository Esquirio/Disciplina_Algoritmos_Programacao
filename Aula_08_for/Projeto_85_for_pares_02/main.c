#include <stdio.h>
#include <stdlib.h>
/* função main inicia a execução do programa */
int main( void )
{
  int soma = 0; /* inicializa soma */
  int numero; /* número a ser acrescido à soma */

  for ( numero = 2; numero <= 100; soma += numero, numero += 2 );

  printf( "Soma eh %d\n", soma ); /* exibe soma */
  return 0; /* Retorna inteiro */
} /* fim da função main */

