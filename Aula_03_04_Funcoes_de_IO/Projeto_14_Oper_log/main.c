/* ---------------------
 INTRODU��O LINGUAGEM C
------------------------ */
#include <stdio.h>  // Fun��es de I/O
/* Fun��o main() inicia o programa */
int main() {
  int a = 1, b = 0, c = 10;
  printf("Op. AND(%d && %d?): %d \n", a, b, a && b);
  printf("Op. AND(%d && %d?): %d \n\n", a, c, a && c);

  printf("Op. OR(%d || %d?): %d \n", a, b, a || b);
  printf("Op. OR(%d || %d?): %d \n\n", a, c, a || c);

  printf("Op. NOT(!%d?): %d \n", a, !a);
  printf("Op. NOT(!%d?): %d \n\n", b, !b);
  return 0;
}  // Fim da fun��o main()
