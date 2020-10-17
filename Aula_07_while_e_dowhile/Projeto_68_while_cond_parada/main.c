#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main()
{
  char resp = ' '; //declara a variável de controle
  int num = 0, acmNum = 0;
  resp = 's'; //inicializa a variável de controle

  while(resp == 's')
  {
    printf("Digite um número: \n");
    scanf("%i", &num);

    acmNum = acmNum + num;	 //acumlador de num

    printf("Deseja continuar? (s/n): \n");
    scanf(" %c", &resp); //Modifica a variável de controle
  }//Fim do while(resp == 's')
  return 0; //Retorna valor inteiro
}//Fim da funcao main()


