#include <stdio.h>  //Funcoes de I/O
/* Função main() */
int main() {
  int num = 0;  // Declara variável
  printf("Digite um valor inteiro entre 1 a 12: ");
  scanf("%i", &num);  // Ler valor inteiro
  switch (num) {
    case 1:
      printf("\nJaneiro\n");
      break;
    case 2:
      printf("\nFevereiro\n");
      break;
    case 3:
      printf("\nMarco\n");
      break;
    case 4:
      printf("\nAbril\n");
      break;
    case 5:
      printf("\nMaio\n");
      break;
    case 6:
      printf("\nJunho\n");
      break;
    case 7:
      printf("\nJulho\n");
      break;
    case 8:
      printf("\nAgosto\n");
      break;
    case 9:
      printf("\nSetembro\n");
      break;
    case 10:
      printf("\nOutubro\n");
      break;
    case 11:
      printf("\nNovembro\n");
      break;
    case 12:
      printf("\nDezembro\n");
      break;
    default:
      printf("\nMes invalido!!\n");
      break;
  }  // Fim do switch
  return 0;  // Retorna um inteiro
}  // Fim da funcao main()
