/* Repeti��o controlada por contador com a estrutura for */
#include <stdio.h>
#include <stdlib.h>
/* fun��o main inicia a execu��o do programa */
int main( void )
{
  int contador; /* declara o contador */
  /* inicializa��o, condi��o de repeti��o e incremento
  s�o todos inclu�dos no cabe�alho da estrutura for. */
  for ( contador = 1; contador <= 10; contador++ ) {
      printf( "%d\n", contador );
  } /* fim do for */
  return 0; /* indica que o programa terminou com sucesso */
} /* fim da fun��o main */


