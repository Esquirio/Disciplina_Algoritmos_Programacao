/* ---------------------
 INTRODU��O LINGUAGEM C
------------------------ */
#include <locale.h>  // Para alterar o idioma
#include <stdio.h>   // Fun��es de I/O
/* Fun��o main() inicia o programa */
int main() {
  setlocale(LC_ALL, "Portuguese");  // Configura idioma
  // Imprime mensagens com caracteres especiais
  printf("\n\nOl� Alunos!\n");
  printf("Como voc�s est�o?\n");
  printf("Voc�s t�m alguma d�vida?\n");
  return 0;  // Retorna valor inteiro
}  // Fim da fun��o main()
