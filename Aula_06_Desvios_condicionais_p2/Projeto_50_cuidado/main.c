#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main(){
  int num_a = 30, num_b = 50;
  printf("Valor 01: %d, Valor 02: %d, Soma: %d\n\n", num_a, num_b, num_a += num_b);
  printf("Valor 01: %d, Valor 02: %d, Soma: %d\n\n", num_a, num_b, num_a += num_b);
  printf("Valor 01: %d, Valor 02: %d, Sub: %d\n\n", num_a, num_b, num_a -= num_b);
  printf("Valor 01: %d, Valor 02: %d, Mult: %d\n\n", num_a, num_b, num_a *= num_b);
  printf("Valor 01: %d, Valor 02: %d, Div: %d\n\n", num_a, num_b, num_a /= num_b);
  printf("Valor 01: %d, Valor 02: %d, Resto: %d\n\n", num_a, num_b, num_a %= num_b);
  return 0;
}//Fim da função main()
