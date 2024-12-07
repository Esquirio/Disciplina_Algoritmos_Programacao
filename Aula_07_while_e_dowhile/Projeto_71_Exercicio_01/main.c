#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main() {
  int cont = 100;  // declara e inicializa o contador
  // Laco de repeticao
  while (cont <= 200) {
    printf("%i ", cont);
    cont++;  // incremento do contador
  }  // Fim do while(cont <= 200)
  return 0;  // Retorna valor inteiro
}  // Fim da funcao main()
