#include <stdio.h>
/*Funcao main()*/
int main()
{
  /* Declara variáveis float */
  char nome[50];
  float horas = 0.0, valor_hora = 0.0, salario = 0.0, taxa = 0.0;
  printf("Digite nome: "); /* Msg para o usuário */
  gets(nome); // Leitura do nome do trabalhador
  printf("Digite o numero de horas: "); /* Msg para o usuário */
  scanf("%f", &horas); /* Leitura das horas */
  printf("Digite o valor em reais das horas: "); /* Msg para o usuário */
  scanf("%f", &valor_hora); /* Leitura dp valor_hora */
  //Calculo do salario bruto
  salario = horas * valor_hora;
  //Testa salario
  if(salario < 1000){
    taxa = .05; //Taxa de 5%
  }//Fim if(salario < 1000)
  else if(salario < 5000){
    taxa = .11; //Taxa de 11%
  }//Fim else if(salario < 5000)
  else{
    taxa = .35; //Taxa de 35%
  }//Fim do else
  //Imprime resultados
  printf("\n\nTrabalhador: %s \n", nome);
  printf("Horas trabalhadas: %.2f \n", horas);
  printf("Valor-hora: R$ %.2f \n", valor_hora);
  printf("Salario bruto: R$ %.2f \n", salario);
  printf("Imposto a pagar: R$ %.2f \n", salario*taxa);
  printf("Liquido: R$ %.2f \n", salario*(1.0 - taxa));
  return 0;
}//Fim da funcao

