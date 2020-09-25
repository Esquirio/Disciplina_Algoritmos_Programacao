#include <stdio.h> // Necessário funções de I/O
/* Funcão: main() */
int main()
{
  char func[50];
  float sal, sal_novo;
  printf("Digite seu nome: ");
  gets(func); // Leitura do nome
  printf("Digite seu Idade: ");
  scanf("%f", &sal); // Ler salario
  // Calculo do novo salario
  sal_novo = sal*1.25;
  // Imprime resultados
  printf("O novo salario de %s eh R$ %.2f \n\n", func, sal_novo);
  return 0;
}// Fim da função main()

