#include <stdio.h> // Fun��es de I/O, etc.
/* Funcao main()*/
int main(){
  int num; // Declara��o da vari�vel
  // Mensagem para o usu�rio
  printf("Digite um numero: ");
  scanf("%d", &num);
  // Teste logico if
  if (!(num%5))
    printf("O numero %d eh divisivel por 5.\n", num);
  else
    printf("O numero %d nao eh divisivel por 5.\n", num);
  return 0; // Retorna um valor inteiro
}// Fim da fun��o main()

/*
  if (num%5 == 0){
    printf("O numero %d eh divisivel por 5.\n", num);
  }// Fim do if
  else{
    printf("O numero %d nao eh divisivel por 5.\n", num);
  }// Fim do else
*/
