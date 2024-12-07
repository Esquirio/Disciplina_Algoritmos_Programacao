/* ---------------------
 INTRODU��O LINGUAGEM C
------------------------ */
#include <stdio.h>    // Fun��es de I/O
#include <windows.h>  // API para Windows
/* Fun��o main() inicia o programa */
int main() {
  // Fun��o SetConsoleTextAttribute para configurar a cor do console
  // A color � definida por um n�mero de 0 a 255
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
  // Mensagem escrita de verde
  printf("I want to be nice today!\n");
  SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
  // Mensagem escrita de amarelo
  printf("I want to be nice today!\n");
  return 0;  // Retorna um valor inteiro
}  // Fim da fun��o main()
