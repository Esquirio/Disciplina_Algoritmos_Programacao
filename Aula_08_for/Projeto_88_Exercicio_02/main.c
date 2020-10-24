#include <stdio.h>  //Funções de I/O, etc.
#include <stdlib.h>
#include <math.h>  //Função pow
/* Funcão: main() */
int main(){
  //Laco de repeticao
  for(int i = 15; i <= 100; i++)
    printf("O quadrado de %3i eh %7.1f \n", i, pow(i, 2));
  return 0; //Retorna valor inteiro
}//Fim da funcao main()

