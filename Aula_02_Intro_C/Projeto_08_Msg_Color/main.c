/* ---------------------
 INTRODUÇÃO LINGUAGEM C
------------------------ */
#include <stdio.h>    // Funções de I/O
#include <windows.h>  // API para Windows
/* Função main() inicia o programa */
int main() {
  // Função SetConsoleTextAttribute para configurar a cor do console
  // A color é definida por um número de 0 a 255
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
  // Mensagem escrita de verde
  printf("I want to be nice today!\n");
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
  // Mensagem escrita de amarelo
  printf("I want to be nice today!\n");
  return 0;  // Retorna um valor inteiro
}  // Fim da função main()
