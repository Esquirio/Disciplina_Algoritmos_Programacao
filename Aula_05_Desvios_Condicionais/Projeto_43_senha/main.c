#include <stdio.h> //Funcoes de I/O
#include <string.h> //Funcao strcmp
#include <conio.h>  //Funcao getch
/* Funcao main */
int main()
{
  //Declaracao de variaveis
  char senha_lida[6], senha[6]="R10p5";
  /* Msg para o usuário */
  printf("Digite uma senha com 5 caracteres/numeros:\n");
  senha_lida[0] = getch(); putchar('*');
  senha_lida[1] = getch(); putchar('*');
  senha_lida[2] = getch(); putchar('*');
  senha_lida[3] = getch(); putchar('*');
  senha_lida[4] = getch(); putchar('*');
  senha_lida[5] = '\0';
  //Testa senha
  if(!strcmp(senha_lida, senha))
    printf("\n\nacesso concedido\n\n");
  else
    printf("\n\nacesso negado\n\n");
  return 0; //Retorno inteiro
}//Fim da funcao main()

