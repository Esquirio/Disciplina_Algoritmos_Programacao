#include <stdio.h>  //Fun��es de I/O, etc.
/* Func�o: main() */
int main()
{
  char resp = ' '; //declara a vari�vel de controle
  int num = 0, acmNum = 0;
  resp = 's'; //inicializa a vari�vel de controle

  while(resp == 's')
  {
    printf("Digite um n�mero: \n");
    scanf("%i", &num);

    acmNum = acmNum + num;	 //acumlador de num

    printf("Deseja continuar? (s/n): \n");
    scanf(" %c", &resp); //Modifica a vari�vel de controle
  }//Fim do while(resp == 's')
  return 0; //Retorna valor inteiro
}//Fim da funcao main()


