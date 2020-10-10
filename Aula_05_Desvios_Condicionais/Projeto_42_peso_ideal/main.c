#include <stdio.h> //Funcoes de I/O
/* Funcao main */
int main()
{
  //Declaracao de variaveis
  float altura = 0.0, peso_ideal = 0.0;
  char sexo = 's', erro = 0;
  printf("Digite a altura da pessoa: "); /* Msg para o usuário */
  scanf("%f", &altura); /* Ler a altura */
  printf("Digite sexo da pessoa (m ou s): "); /* Msg para o usuário */
  scanf(" %c", &sexo); /* Ler o sexo */
  //Testa sexo
  if(sexo == 'm' || sexo == 'M')
    peso_ideal = (72.7 * altura) - 58;
  else if (sexo == 'f' || sexo == 'F')
    peso_ideal = (62.1 * altura) - 44.7;
  else{
    printf("sexo invalido!!\n");
    erro = 1;
  }//Fim do else
  if(erro == 0){
    //Imprime resultado
    printf("\nSua altura: %.2f\n", altura);
    printf("Seu sexo: %c\n", sexo);
    printf("Peso ideal: %.2f\n", peso_ideal);
  }//Fim if(erro == 0)
  return 0; //Retorno inteiro
}//Fim da funcao main()

