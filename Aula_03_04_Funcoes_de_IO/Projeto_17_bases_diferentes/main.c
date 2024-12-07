#include <stdio.h>  // Funções de I/O
/* Função main() inicia o programa */
int main() {
  char letra;                          // Cria variável char com o valor A
  printf("Digite um caractere: ");     // Interação com o usuário
  scanf(" %c", &letra);                // Recebe um valor do teclado
  printf("\nCaractere:   %c", letra);  // Imprime o caractere
  printf("\nDecimal:     %d", letra);  // Imprime em decimal
  printf("\nHexadecimal: %x", letra);  // Imprime em hexadecimal
  printf("\nOctal:       %o", letra);  // Imprime em octal
  return 0;
}  // Fim da funcao main()
