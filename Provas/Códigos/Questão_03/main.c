#include <stdio.h>
/*Funcao main()*/
int main() {
  int ano = 0, bissexto = 0; /* Declara variável inteira */
  printf("Digite um ano: "); /* Msg para o usuário */
  scanf("%d", &ano);         /* Leitura do ano */
  // Testa se o ano é bissexto
  if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
    printf("\nAno bissexto.\n");
  }  // Fim do if
  else {
    printf("\nAno nao eh bissexto.\n");
  }  // Fim do else
  return 0;
}  // Fim da funcao
