/* ---------------------
 INTRODU��O LINGUAGEM C
------------------------ */
#include <stdio.h>  // Fun��es de I/O
#include <locale.h> // Para alterar o idioma
/* Fun��o main() inicia o programa */
int main()
{
  setlocale(LC_ALL, "Portuguese"); // Configura idioma
  // Imprime mensagens com caracteres especiais
  printf("\n\nOl� Alunos!\n");
  printf("Como voc�s est�o?\n");
  printf("Voc�s t�m alguma d�vida?\n");
  return 0; // Retorna valor inteiro
}// Fim da fun��o main()

