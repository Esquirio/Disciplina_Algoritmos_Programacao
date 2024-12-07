#include <stdio.h>  //Funções de I/O, etc.
#include <stdlib.h>
/* Funcão: main() */
int main() {
  int cont = 10;  // declara e inicializa o contador
  // Laco de repeticao
  while (cont <= 20) {
    printf("A metade de %i  eh %.1f \n", cont, cont / 2.0);
    cont++;  // incremento do contador
  }  // Fim do while(cont <= 20)
  return 0;  // Retorna valor inteiro
}  // Fim da funcao main()
