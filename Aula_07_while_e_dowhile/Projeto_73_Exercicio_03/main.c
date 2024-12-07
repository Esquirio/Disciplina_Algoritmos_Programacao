#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main() {
  int num = 0, cont = 1, par = 0, impar = 0;  // Declara variaveis
  srand(time(NULL));                          // gera uma pseudo semente
  // Laco de repeticao
  while (cont <= 200) {
    num = (rand() % 1000) + 1;
    if ((num % 2) == 0)
      par++;
    else
      impar++;
    cont++;  // incremento do contador
  }  // Fim do while(cont <= 200)
  printf("Qtde de numeros pares: %i \n", par);
  printf("Qtde de numeros impares: %i \n", impar);
  return 0;  // Retorna valor inteiro
}  // Fim da funcao main()
