#include <stdio.h>  //Fun��es de I/O, etc.
/* Func�o: main() */
int main() {
  int c; /* define vari�vel */
  /* demonstra p�s-incremento */
  c = 5;                                             /* atribui 5 a c */
  printf("Numero antes do pos-incremento: %d\n", c); /* imprime 5 */
  printf("Numero pos-incremento: %d\n",
         c++); /* imprime 5 e depois p�s-incremento*/
  printf("Numero apos pos-incremento: %d\n\n", c); /* imprime 6 */
  /* demonstra pr�-incremento */
  c = 5;                                             /* atribui 5 a c */
  printf("Numero antes do pre-incremento: %d\n", c); /* imprime 5 */
  printf("Numero pre-incremento: %d\n",
         ++c); /* pr�-incremento e depois imprime 6 */
  printf("Numero apos pre-incremento: %d\n\n\n", c); /* imprime 6 */

  /* demonstra p�s-decremento */
  c = 5;                                             /* atribui 5 a c */
  printf("Numero antes do pos-decremento: %d\n", c); /* imprime 5 */
  printf("Numero pos-decremento: %d\n",
         c--); /* imprime 5 e depois p�s-decremento*/
  printf("Numero apos pos-decremento: %d\n\n", c); /* imprime 4 */
  /* demonstra pr�-decremento */
  c = 5;                                             /* atribui 5 a c */
  printf("Numero antes do pre-decremento: %d\n", c); /* imprime 5 */
  printf("Numero pre-decremento: %d\n",
         --c); /* pr�-decremento e depois imprime 4 */
  printf("Numero apos pre-decremento: %d\n\n\n", c); /* imprime 4 */
  return 0;
}  // Fim da fun��o main()
