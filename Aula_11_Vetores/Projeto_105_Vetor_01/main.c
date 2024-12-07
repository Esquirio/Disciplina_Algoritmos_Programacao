#include <stdio.h>
#include <stdlib.h>

int main() {
  int i = 0;        // Contador - indice do vetor
  float notas[10];  // Declara vetor com 10 elementos

  // Laço para leitura das 10 notas e armazenamento do vetor
  for (i = 0; i < 10; i++) {
    printf("Digite a %i a nota: \n", (i + 1));
    scanf("%f", &notas[i]);
  }  // Fim do for

  // Laço para imprimir os dados do vetor
  for (i = 0; i < 10; i++) {
    printf("%ia nota: %.1f \n", (i + 1), notas[i]);
  }  // Fim do for
  return 0;
}  // Fim da funcao main()
