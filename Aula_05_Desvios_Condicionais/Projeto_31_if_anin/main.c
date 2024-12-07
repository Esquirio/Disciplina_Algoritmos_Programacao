#include <stdio.h>  // Funcoes de I/O
/* Funcao main() */
int main() {
  int palpite;  // Declara variavel int
  printf("Digite seu palpite: ");
  scanf("%d", &palpite);
  // Testa se o valor é igual a 15
  if (palpite == 15) {
    // Acao executada se teste verdadeiro
    printf("Voce ACERTOU!!! \n");
  }  // Fim do if( palpite == 15 )
  else {
    // Testa se o valor é menor do que 15
    if (palpite < 15) {
      // Acao executada se teste verdadeiro
      printf("Seu palpite esta ABAIXO!!! \n");
    }  // Fim do if( palpite < 15 )
    else {
      // Acao executada se testes falsos
      printf("Seu palpite esta ACIMA!!! \n");
    }  // Fim do else
  }  // Fim do else
  return 0;
}  // Fim da funcao main()
