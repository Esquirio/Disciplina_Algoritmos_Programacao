#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main() {
  int num = 0, cont = 1;
  printf("Digite um numero: ");
  scanf("%i", &num);  // Ler o numero
  printf("\nSequencia impressa: ");
  while (cont <= num) {
    printf("%i ", cont);
    cont *= 2;
  }  // Fim do while(cont <= num)
  putchar('\n');
  return 0;  // Retorna valor inteiro
}  // Fim da funcao main()
