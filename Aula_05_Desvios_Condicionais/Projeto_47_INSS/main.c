#include <stdio.h>
/*Funcao main()*/
int main() {
  /* Declara variáveis float */
  char nome[50];
  float salario = 0.0, desconto = 0.0;
  printf("Digite o salario: "); /* Msg para o usuário */
  scanf("%f", &salario);        /* Leitura do salario */
  // Calculo do desconto
  if (salario <= 600) {
    desconto = 0;  // Isento
  }  // Fim if(salario <= 600)
  else if (salario > 600 && salario <= 1200) {
    desconto = salario * 0.20;  // Desconto 20%
  }  // Fim else if(salario > 600 && salario <= 1200)
  else if (salario > 1200 && salario <= 2000) {
    desconto = salario * 0.25;  // Desconto 25%
  }  // Fim else if(salario > 600 && salario <= 1200)
  else {
    desconto = salario * 0.30;  // Desconto 30%
  }  // Fim do else
  // Imprime resultados
  printf("\nDesconto do INSS: R$ %.2f \n", desconto);
  return 0;
}  // Fim da funcao
