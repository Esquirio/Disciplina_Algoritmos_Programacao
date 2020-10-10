#include <stdio.h>
/*Funcao main()*/
int main()
{
  int num_a = 0, num_b =0, num_c = 0; /* Declara variáveis inteiras */
  printf("Digite tres numeros inteiros: "); /* Msg para o usuário */
  scanf("%d%d%d", &num_a, &num_b, &num_c); /* Le três inteiros */
  //Testa maior numero
  if(num_a > num_b && num_a > num_c)
    printf("\nMaior eh %d\n\n", num_a);
  else if(num_b > num_c)
    printf("\nMaior eh %d\n\n", num_b);
  else if(num_c > num_a)
    printf("\nMaior eh %d\n\n", num_c);
  else
    printf("\nNumeros Iguais!!\n\n");
  return 0;
}// Fim da funcao main

