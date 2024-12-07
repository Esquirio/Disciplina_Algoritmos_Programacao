#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main() {
  int num_a = 30, num_b = 50;
  printf("Valor 01: %d, Valor 02: %d ", num_a, num_b);
  printf("Soma: %d\n\n", num_a += num_b);
  printf("Valor 01: %d, Valor 02: %d ", num_a, num_b);
  printf("Sub: %d\n\n", num_a -= num_b);
  printf("Valor 01: %d, Valor 02: %d ", num_a, num_b);
  printf("Mult: %d\n\n", num_a *= num_b);
  printf("Valor 01: %d, Valor 02: %d ", num_a, num_b);
  printf("Div: %d\n\n", num_a /= num_b);
  printf("Valor 01: %d, Valor 02: %d ", num_a, num_b);
  printf("Resto: %d\n\n", num_a, num_b, num_a %= num_b);
  return 0;
}  // Fim da função main()
