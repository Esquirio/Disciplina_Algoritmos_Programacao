#include <stdio.h>  // Fun��es de I/O, etc.
/* Func�o: main() */
int main(){
  char oper; // Declara variavel char
  printf("Digite um sinal de operacao: ");
  scanf(" %c", &oper);
  // Testa sinal da operacao
  if(oper == '+'){
    printf("Sinal de adicao!\n");
  }// Fim do if(oper == '+')
  else if(oper == '-'){
    printf("Sinal de subtracao!\n");
  }// Fim do else if(oper == '-')
  else if(oper == '*'){
    printf("Sinal de multiplicacao!\n");
  }// Fim do else if(oper == '*')
  else if(oper == '/'){
    printf("Sinal de divisao!\n");
  }// Fim do else if(oper == '/')
  else{
    printf("Sinal nao previsto!\n");
  }// Fim do else
  return 0;
}// Fim da fun��o main()

