#include <stdio.h> // Funcoes de I/O
/* Funcao main() */
int main()
{
  int num; // Declara variavel int
  printf("Digite um numero: ");
  scanf("%d", &num);
  // Testa se o valor é igual a 20
  if( num == 20 ){
    // Acao executada se teste verdadeiro
    printf("A metade de %d eh %d.\n\n", num, num/2);
  }// Fim do if( num == 20 )
  else{
    // Acao executada se teste verdadeiro
    printf("Nao faz nada!!! \n\n");
  }// Fim do else
  return 0;
}// Fim da funcao main()

