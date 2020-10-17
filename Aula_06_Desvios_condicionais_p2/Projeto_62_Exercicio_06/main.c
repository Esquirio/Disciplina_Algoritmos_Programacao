#include <stdio.h> //Funcoes de I/O
#include <ctype.h> //Funcao toupper
/* Função main() */
int main()
{
  char periodo = 's'; //Declara variavel
  printf("Digite o periodo da sua aula: ");
  scanf(" %c", &periodo);
  periodo = toupper(periodo);
  switch(periodo){
  case 'M':
    printf("Bom dia!!!\n");
    break;
  case 'V':
    printf("Boa tarde!!!\n");
    break;
  case 'N':
    printf("Boa noite!!!\n");
    break;
  default:
    printf("\nPeriodo invalido!\n");
    break;
  }//Fim do switch
  return 0;
}//Fim da funcao main()


