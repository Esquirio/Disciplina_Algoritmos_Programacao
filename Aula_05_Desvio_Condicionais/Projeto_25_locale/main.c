#include <stdio.h> // Necess�rio fun��es de I/O
#include <locale.h> // Idioma PT-BR
/* Func�o: main() */
int main()
{
  float valor; // Declara��o de um float
  // Antes da formata��o do de idioma
  printf("Digite valor real com ponto decimal: ");
  scanf("%f", &valor);
  printf("Apresentacao do valor reais: %.2f \n\n", valor);
  setlocale(LC_ALL, "Portuguese");
  // Apos da formata��o do de idioma
  printf("Digite valor real com ponto virgula: ");
  scanf("%f", &valor);
  printf("Apresentacao do valor reais: %.2f \n\n", valor);
  return 0;
}// Fim da fun��o main()

