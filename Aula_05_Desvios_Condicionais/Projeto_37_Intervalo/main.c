#include <stdio.h> // Funcoes de I/O
/* Funcao main() */
int main()
{
  int num; // Declara variavel int
  printf("Digite um numero: ");
  scanf("%d", &num);
  // Testa se o valor é igual a 20
  if( num >=50 && num <= 100 ){
    // Acao executada se teste verdadeiro
    printf("Pertence ao intervalo 50 <= x <= 100 \n\n");
  }// Fim do if( num == 20 )
  else{
    // Acao executada se teste verdadeiro
    printf("Nao pertence ao intervalo! \n\n");
  }// Fim do else
  return 0;
}// Fim da funcao main()
