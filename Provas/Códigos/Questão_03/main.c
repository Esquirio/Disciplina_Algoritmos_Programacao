#include <stdio.h>
/*Funcao main()*/
int main() {
  int ano = 0, bissexto = 0; /* Declara vari�vel inteira */
  printf("Digite um ano: "); /* Msg para o usu�rio */
  scanf("%d", &ano);         /* Leitura do ano */
  // Testa se o ano � bissexto
  if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
    printf("\nAno bissexto.\n");
  }  // Fim do if
  else {
    printf("\nAno nao eh bissexto.\n");
  }  // Fim do else
  return 0;
}  // Fim da funcao
