#include <stdio.h>  //Fun��es de I/O, etc.
/* Func�o: main() */
int main() {
  int cont = 0;  // declara o contador
  cont = 1;      // inicializa o contador
  // Laco de repeticao
  do printf("%i \n", cont++);
  while (cont <= 10);

  return 0;  // Retorna valor inteiro
}  // Fim da funcao main()
