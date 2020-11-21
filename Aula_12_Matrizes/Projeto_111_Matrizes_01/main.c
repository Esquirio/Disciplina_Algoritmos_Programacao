#include <stdio.h>
#include <stdlib.h>
#define LIN 2
#define COL 2
int main()
{
  int numeros[LIN][COL];
  int i, j, somaLinhas = 0, total = 0;

  //Leitura de dados para a matriz
  for(i = 0; i < LIN; i++){
    for(j = 0; j < COL; j++){
      scanf("%i", &numeros[i][j]);
    }//Fim do for(j = 0; j < COL; j++)
  }//Fim do for(i = 0; i < LIN; i++)

  //Soma acumulativa
  for(i = 0; i < LIN; i++){
    somaLinhas = 0; //Zera o acumulador de linhas
    for(j = 0; j < COL; j++){
      somaLinhas += numeros[i][j];
    }
    printf("A soma da linha %i eh: %i \n", i, somaLinhas);
    total += somaLinhas; //Soma ellementos da matriz
  }

  printf("O somatorio da linha eh: %i \n", total);

  printf("\n---- Dados da Matriz ----\n");
  for(i = 0; i< LIN; i++){
    for(j = 0; j < COL; j++){
      //Impressão tabulada
      printf("%i\t", numeros[i][j]);
    }
    printf("\n"); //Pula 1 linha
  }

  return 0;
}//Fim da funcao main()
