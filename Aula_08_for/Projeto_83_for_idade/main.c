#include <stdio.h> //Fun��es de I/O
#include <stdlib.h>
#define PESSOAS 100
/* fun��o main */
int main( void )
{
  int idade = 0, acmIdade = 0; //acumulador
  float media = 0.0;
  //La�o for
  for( int cont = 0 ; cont < PESSOAS ; cont++ )
  {
      printf ( "Digite a %i a idade:  \n", (cont+1) );
      scanf("%i", &idade);
      acmIdade += idade; //acumula as idades
  }
  media = acmIdade / (float)PESSOAS;
  printf( "A media das idades eh: %.2f \n", media);
  return 0; /* Retorna inteiro */
} /* fim da fun��o main */

