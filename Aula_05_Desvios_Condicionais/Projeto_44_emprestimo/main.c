#include <stdio.h>  //Funcoes de I/O
/* Funcao main */
int main() {
  // Declaracao de variaveis
  float salario = 0.0, prest = 0.0;
  /* Msg para o usu�rio */
  printf("Digite o salario: ");
  scanf("%f", &salario);
  printf("Digite o valor da prestacao: ");
  scanf("%f", &prest);
  // Presta��o � menor do que 30% do sal�rio
  if ((prest / salario) < 0.30)
    printf("\nEmprestimo concedido!!\n\n");
  else
    printf("\nEmprestimo nao pode ser concedido!!\n\n");
  return 0;  // Retorno inteiro
}  // Fim da funcao main()
