#include <stdio.h> //Funcoes de I/O
/* Funcao main */
int main()
{
  //Declaracao de variaveis
  float altura = 0.0, peso_ideal = 0.0;
  char sexo = 's';
  printf("Digite a altura da pessoa: "); /* Msg para o usuário */
  scanf("%f", &altura); /* Ler a altura */
  printf("Digite sexo da pessoa (m ou s): "); /* Msg para o usuário */
  scanf(" %c", &sexo); /* Ler o sexo */
  //Testa sexo
  if(sexo == 'm')
    peso_ideal = (72.7 * altura) - 58;
  else
    peso_ideal = (62.1 * altura) - 44.7;
  //Imprime resultado
  printf("\nSua altura: %.2f\n", altura);
  printf("Seu sexo: %c\n", sexo);
  printf("Peso ideal: %.2f\n", peso_ideal);
  return 0; //Retorno inteiro
}//Fim da funcao main()

