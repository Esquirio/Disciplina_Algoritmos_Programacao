#include <stdio.h>  //Funções de I/O, etc.
#include <stdlib.h>
#define REPETE 25
/* função main */
int main( void ){
  /* declara variáveis */
  int idade = 0, contIdade = 0, contAltura = 0, contPeso = 0;
  float peso = 0.0, altura = 0.0, acmAltura = 0.0;
  for (int i = 1; i <= REPETE; i++){
    printf("Digite idade %i: ", i);
    scanf("%d", &idade);
    printf("Digite altura %i: ", i);
    scanf(" %f", &altura);

    printf("Digite peso %i: ", i);
    scanf(" %f", &peso);
    if(idade > 50) //Teste contidade
      contIdade++;
    if(idade >= 10 && idade <= 20){ //Teste alturas
      contAltura++;
      acmAltura += altura;
    }//Fim do if
    if(peso <= 40) //Testa peso
      contPeso++;
  }//Fim do for

  printf("Pessoas com mais de 50 anos: %i \n", contIdade);
  printf("Pessoas entre 10 e 20 anos: %i \n", contAltura);
  printf("Soma das alturas de pessoas entre 10 e 20 anos: %.2f \n", acmAltura);
  printf("Pessoas com menos de 40kg: %i \n", contPeso);
  printf("Percentual com menos de 40kg: %.2f% \n", (contPeso*100.0)/REPETE);
  return 0; /* Retorna inteiro */
} /* fim da função main */

