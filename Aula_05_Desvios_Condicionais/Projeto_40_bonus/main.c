#include <stdio.h> //Funcoes de I/O
/* Funcao main */
int main()
{
  //Declaracao de variaveis
  float salario = 0.0, bonus = 0.0;
  int tempo = 0;
  printf("Digite o salario: "); /* Msg para o usuário */
  scanf("%f", &salario); /* Ler salario */
  printf("Digite o tempo de casa: "); /* Msg para o usuário */
  scanf("%d", &tempo); /* Ler tempo */
  //Testa tempo de casa
  if(tempo >= 5)
    bonus = salario*0.20;
  else
    bonus = salario*0.10;
  //Imprime resultado
  printf("\n\nO bonus desse funcionario eh de: R$ %.2f\n\n", bonus);
  return 0; //Retorno inteiro
}//Fim da funcao main()


