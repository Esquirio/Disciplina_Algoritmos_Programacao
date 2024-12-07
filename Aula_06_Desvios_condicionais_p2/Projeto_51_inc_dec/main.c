#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main() {
  int c; /* define variável */
  /* demonstra pós-incremento */
  c = 5;                                             /* atribui 5 a c */
  printf("Numero antes do pos-incremento: %d\n", c); /* imprime 5 */
  printf("Numero pos-incremento: %d\n",
         c++); /* imprime 5 e depois pós-incremento*/
  printf("Numero apos pos-incremento: %d\n\n", c); /* imprime 6 */
  /* demonstra pré-incremento */
  c = 5;                                             /* atribui 5 a c */
  printf("Numero antes do pre-incremento: %d\n", c); /* imprime 5 */
  printf("Numero pre-incremento: %d\n",
         ++c); /* pré-incremento e depois imprime 6 */
  printf("Numero apos pre-incremento: %d\n\n\n", c); /* imprime 6 */

  /* demonstra pós-decremento */
  c = 5;                                             /* atribui 5 a c */
  printf("Numero antes do pos-decremento: %d\n", c); /* imprime 5 */
  printf("Numero pos-decremento: %d\n",
         c--); /* imprime 5 e depois pós-decremento*/
  printf("Numero apos pos-decremento: %d\n\n", c); /* imprime 4 */
  /* demonstra pré-decremento */
  c = 5;                                             /* atribui 5 a c */
  printf("Numero antes do pre-decremento: %d\n", c); /* imprime 5 */
  printf("Numero pre-decremento: %d\n",
         --c); /* pré-decremento e depois imprime 4 */
  printf("Numero apos pre-decremento: %d\n\n\n", c); /* imprime 4 */
  return 0;
}  // Fim da função main()
