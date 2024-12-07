#include <stdio.h>
#include <stdlib.h>

int main() {
  int i, maior;
  // Declaracao do vetor de 5 elementos
  int numeros[5];

  // Laço para armazenar os dados no vetor
  for (i = 0; i < 5; i++) {
    printf("Digite um numero: \n");
    scanf("%i", &numeros[i]);
  }  // Fim do for

  // Atribui o 1o numero do vetor a variável maior
  maior = numeros[0];

  // Encontra o maior numero
  for (i = 0; i < 5; i++) {
    if (numeros[i] > maior) {
      maior = numeros[i];
    }  // Fim do if
  }  // Fim do for

  printf("O maior numero eh: %i \n", maior);
  return 0;
}  // Fim da main()
