#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main()
{
  float n1 = 0, n2 = 0, resultado = 0;
  char sinal = 'a';
  int erro = 0;

  printf("Digite dois numeros: ");
  scanf("%f%f", &n1, &n2);
  printf("Digite uma operacao: ");
  scanf(" %c", &sinal);

  switch(sinal){
  case '+':
    resultado = n1 + n2;
    break;
  case '-':
    resultado = n1 - n2;
    break;
  case '*':
    resultado = n1 * n2;
    break;
  case '/':
    resultado = n1 / n2;
    break;
  default:
    printf("Sinal invalido\n");
    erro = 1;
    break;
  }//Fim do switch

  printf("\nResultado de %f %c %f eh %f \n\n", n1, sinal, n2, resultado);

  return 0;
}//Fim da função main()


