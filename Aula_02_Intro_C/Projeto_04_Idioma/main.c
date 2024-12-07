/* ---------------------
 INTRODUÇÃO LINGUAGEM C
------------------------ */
#include <locale.h>  // Para alterar o idioma
#include <stdio.h>   // Funções de I/O
/* Função main() inicia o programa */
int main() {
  setlocale(LC_ALL, "Portuguese");  // Configura idioma
  // Imprime mensagens com caracteres especiais
  printf("\n\nOlá Alunos!\n");
  printf("Como vocês estão?\n");
  printf("Vocês têm alguma dúvida?\n");
  return 0;  // Retorna valor inteiro
}  // Fim da função main()
