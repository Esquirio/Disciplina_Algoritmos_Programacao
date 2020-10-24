/* Repetição controlada por contador com a estrutura for */
#include <stdio.h>
#include <stdlib.h>
/* função main inicia a execução do programa */
int main( void )
{
  int contador; /* declara o contador */
  /* inicialização, condição de repetição e incremento
  são todos incluídos no cabeçalho da estrutura for. */
  for ( contador = 1; contador <= 10; contador++ ) {
      printf( "%d\n", contador );
  } /* fim do for */
  return 0; /* indica que o programa terminou com sucesso */
} /* fim da função main */


