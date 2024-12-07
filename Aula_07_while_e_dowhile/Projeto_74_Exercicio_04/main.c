#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
#define QTDADE 10
int main() {
  // Declara variaveis
  int num = 0, cont = 0, menor = 0;
  while (cont < QTDADE) {
    printf("Digite o %d\370 numero: ", (cont + 1));
    scanf("%d", &num);
    if (cont == 0)
      menor = num;
    else if (num < menor)
      menor = num;
    cont++;  // Incrementa contador
  }  // Fim do while(cont < QTDADE)
  printf("O menor numero da lista eh: %d \n", menor);
  return 0;  // Retorna valor inteiro
}  // Fim da funcao main()
