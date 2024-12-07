#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main() {
  int cont = 0, resto = 0;  // declara o contador
  cont = 1;                 // inicializa o contador
  // Laco de repeticao
  while (cont <= 10) {
    resto = cont % 2;  // calcula o resto da divisão
    if (resto == 0) {
      printf("O numero %i eh PAR! \n", cont);
    }  // Fim do if
    cont = cont + 1;  // incremento do contador
  }  // Fim do while(cont <= 10)
  return 0;  // Retorna valor inteiro
}  // Fim da funcao main()
