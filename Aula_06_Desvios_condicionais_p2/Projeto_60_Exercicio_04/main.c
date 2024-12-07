#include <ctype.h>  //Funcao toupper
#include <stdio.h>  //Funcoes de I/O
/* Função main() */
int main() {
  // Declara variaveis
  char plano = 's';
  float salario = 0.0, novo_sal = 0.0;
  printf("Digite o plano do funcionario: ");
  scanf(" %c", &plano);
  plano = toupper(plano);
  printf("Digite o salario do funcionario: ");
  scanf("%f", &salario);
  switch (plano) {
    case 'A':
      novo_sal = salario * 1.1;
      break;
    case 'B':
      novo_sal = salario * 1.15;
      break;
    case 'C':
      novo_sal = salario * 1.2;
      break;
    default:
      novo_sal = salario;
      printf("\nPlano do func invalido!\n");
      break;
  }  // Fim do switch
  printf("\nPlano: %c \n", plano);
  printf("Salario: R$ %.2f \n", salario);
  printf("Novo salario: R$ %.2f \n", novo_sal);
  return 0;
}  // Fim da funcao main()
