#include <stdio.h>  //Funcoes de I/O
/* Função main() */
int main() {
  int num = 0;  // Declara variável
  printf("Digite um valor inteiro entre 1 a 7: ");
  scanf("%i", &num);  // Ler valor inteiro
  switch (num) {
    case 1:
      printf("\nDomingo\n");
      break;
    case 2:
      printf("\Segunda-feira\n");
      break;
    case 3:
      printf("\nTerca-feira\n");
      break;
    case 4:
      printf("\nQuarta-feira\n");
      break;
    case 5:
      printf("\nQuinta-feira\n");
      break;
    case 6:
      printf("\nSexta-feira\n");
      break;
    case 7:
      printf("\nSabado\n");
      break;
    default:
      printf("\nDia da semana invalido!!\n");
      break;
  }  // Fim do switch
  return 0;  // Retorna um inteiro
}  // Fim da funcao main()
