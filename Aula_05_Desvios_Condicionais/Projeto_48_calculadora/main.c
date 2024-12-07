#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main() {
  char oper = 's';           // Declara variavel char
  int num_a = 0, num_b = 0;  // Declara variaveis int
  printf("Digite uma operacao: ");
  num_a = (int)(getchar() - '0');
  oper = getchar();
  num_b = (int)(getchar() - '0');
  // Testa sinal da operacao
  if (oper == '+') {
    printf("Resultado: %d \n", num_a + num_b);
  }  // Fim do if(oper == '+')
  else if (oper == '-') {
    printf("Resultado: %d \n", num_a - num_b);
  }  // Fim do else if(oper == '-')
  else if (oper == '*') {
    printf("Resultado: %d \n", num_a * num_b);
  }  // Fim do else if(oper == '*')
  else if (oper == '/' && num_b != 0) {
    printf("Resultado: %d \n", num_a / num_b);
  }  // Fim do else if(oper == '/' && num_b != 0)
  else if (oper == '/' && num_b == 0) {
    printf("Impossivel dividir!!\n");
  }  // Fim else if(oper == '/' && num_b = 0)
  else {
    printf("Sinal invalido!\n");
  }  // Fim do else
  return 0;
}  // Fim da função main()
