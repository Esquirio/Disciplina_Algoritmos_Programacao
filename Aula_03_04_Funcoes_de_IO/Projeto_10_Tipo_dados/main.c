/* ---------------------
 INTRODU��O LINGUAGEM C
------------------------ */
#include <stdio.h> // Fun��es de I/O
/* Fun��o main() inicia o programa */
int main(){
  char ch;  //Variavel alocada do tipo char
  int num;  //Variavel alocada do tipo int
  float x;  //Variavel alocada do tipo float
  double y; //Variavel alocada do tipo double
  printf("\n");
  printf("Bytes de um char: %d\n", sizeof(ch));
  printf("Bytes de um int: %d\n", sizeof(num));
  printf("Bytes de um float: %d\n", sizeof(x));
  printf("Bytes de um double: %d\n", sizeof(y));
  printf("Bytes de um void: %d\n", sizeof(void));
  return 0;
}// Fim da fun��o main()
