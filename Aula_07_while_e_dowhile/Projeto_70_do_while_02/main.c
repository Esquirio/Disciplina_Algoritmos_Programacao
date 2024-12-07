#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main() {
  float nota;  // Declara variaveis
  do {
    printf("Digite uma nota: \n");
    scanf("%f", &nota);
    if (nota < 0 || nota > 10)  // verifica a nota para dar mensagem de erro!
    {
      printf("Valor invalido. A nota deve estar entre 0 e 10! \n\n");
      printf("Digite novamente a nota \n");
    }  // Fim do if
  } while (!(nota >= 0 && nota <= 10));  // Valida se a nota é válida!
  printf("\n\nNota valida!!\n\n");
  return 0;  // Retorna valor inteiro
}  // Fim da funcao main()
