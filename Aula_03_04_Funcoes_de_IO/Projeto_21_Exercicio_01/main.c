#include <stdio.h>  // Necess�rio fun��es de I/O
/* Func�o: main() */
int main() {
  char pessoa[50], sexo;
  int idade;
  printf("Digite seu nome: ");
  gets(pessoa);  // Leitura do nome
  printf("Digite seu Idade: ");
  scanf("%d", &idade);  // Ler idade
  printf("Sexo (m ou f): ");
  scanf(" %c", &sexo);  // Ler sexo
  // Imprime as informa��es
  putchar('\n');
  printf("Nome: %s \n", pessoa);
  printf("Idade: %d anos.\n", idade);
  printf("Sexo: %c \n", sexo);
  return 0;
}  // Fim da fun��o main()
