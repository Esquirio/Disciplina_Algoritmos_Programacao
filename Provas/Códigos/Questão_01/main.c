#include <stdio.h>
/*Funcao main()*/
int main() {
  int num_a = 0, num_b = 0, num_c = 0; /* Declara variáveis inteiras */
  int menor = 0, maior = 0;            /* Declara variáveis inteiras */

  printf("Digite tres numeros inteiros: "); /* Msg para o usuário */
  scanf("%d%d%d", &num_a, &num_b, &num_c);  /* Le três inteiros */

  /* Saida soma, média e produto dos três inteiros */
  printf("Soma eh %d\n", num_a + num_b + num_c);
  printf("Media eh %f\n", (num_a + num_b + num_c) / 3.0);
  printf("Produto eh %d\n", num_a * num_b * num_c);

  menor = num_a;  // Supõe que o num_a é menor
  if (num_b < menor) {
    menor = num_b;  // Atribui o num_b como menor numero
  }  // Fim if(num_b < menor)
  if (num_c < menor) {
    menor = num_c;  // Atribui o num_c como menor numero
  }  // Fim do if (num_c < menor)

  printf("Menor eh %d\n", menor);

  maior = num_a;  // Supõe que o numero a é maior
  if (num_b > maior) {
    menor = num_b;  // Atribui o num_b como maior numero
  }  // Fim if(num_b > maior)
  if (num_c > maior) {
    menor = num_c;  // Atribui o num_c como maior numero
  }  // Fim do if (num_c > maior)

  printf("Maior eh %d\n", maior);
  return 0;
}  // Fim da funcao main

/* Solução 02 */ /*
  //Testa menor numero
  if(num_a < num_b && num_a < num_c){
    menor = num_a; //Atribui o num_a como menor numero
  }//Fim do if(num_a < num_b && num_a < num_c)
  else if(num_b < num_c){
    menor = num_b; //Atribui o num_b como menor numero
  }//Fim else if if(num_b < num_c)
  else{
    menor = num_c; //Atribui o num_c como menor numero
  }//Fim do else
  printf("Menor eh %d\n", menor);

  //Testa maior numero
  if(num_a > num_b && num_a > num_c){
    maior = num_a; //Atribui o num_a como maior numero
  }//Fim do if(num_a > num_b && num_a > num_c)
  else if(num_b > num_c){
    maior = num_b; //Atribui o num_b como maior numero
  }//Fim else if if(num_b > num_c)
  else{
    maior = num_c; //Atribui o num_c como maior numero
  }//Fim do else

  printf("Maior eh %d\n", maior);
*/
