#include <stdio.h>  //Fun��es de I/O, etc.
/* Func�o: main() */
int main()
{
  int cont = 0;  //declara o contador
  cont = 1; //inicializa o contador
  //Laco de repeticao
  while(cont <= 10)
    printf("%i \n", cont++);
  return 0; //Retorna valor inteiro
}//Fim da funcao main()

