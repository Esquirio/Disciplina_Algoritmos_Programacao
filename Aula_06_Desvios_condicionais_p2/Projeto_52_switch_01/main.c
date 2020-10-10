#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main()
{
  int menu = 0;
  printf("===== MENU DE OPCOES =====\n");
  printf(" 1 - Cadastrar Produtos\n");
  printf(" 2 - Listar Produtos\n");
  printf(" 3 - Sair\n");
  scanf("%i", &menu);

  switch(menu){
  case 1:
    printf("Voce escolheu o menu 1!!\n");
    printf("Opcao cadastras produtos\n");
    break;
  case 2:
    printf("Voce escolheu o menu 2!!\n");
    printf("Opcao listar produtos\n");
    break;
  case 3:
    printf("Voce escolheu o menu 3!!\n");
    printf("Opcao sair do sistema\n");
    break;
  default:
    printf("Item de menu Invalido\n");
    break;
  }//Fim do switch
  return 0;
}//Fim da função main()

