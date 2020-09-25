#include <stdio.h> // Necessário funções de I/O
#include <locale.h> // Idioma PT-BR
/* Funcão: main() */
int main()
{
  float valor; // Declaração de um float
  // Antes da formatação do de idioma
  printf("Digite valor real com ponto decimal: ");
  scanf("%f", &valor);
  printf("Apresentacao do valor reais: %.2f \n\n", valor);
  setlocale(LC_ALL, "Portuguese");
  // Apos da formatação do de idioma
  printf("Digite valor real com ponto virgula: ");
  scanf("%f", &valor);
  printf("Apresentacao do valor reais: %.2f \n\n", valor);
  return 0;
}// Fim da função main()

