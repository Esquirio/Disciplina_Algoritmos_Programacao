#include <stdio.h>  // Funcoes de I/O
/* Funcao main() */
int main() {
  int num;  // Declaracao de variavel int
  // Interacao com o usuario
  printf("Digite um numero: ");
  scanf("%i", &num);
  // Teste se o numero eh par
  if (num % 2 == 0) {
    // Acao executada se o numero eh par
    printf("%i eh PAR! \n", num);
  }  // Fim do if
  else {
    // Acao executada se o numero eh impar
    printf("%i eh IMPAR! \n", num);
  }  // Fim do else
  return 0;
}  // Fim da funcao main()
