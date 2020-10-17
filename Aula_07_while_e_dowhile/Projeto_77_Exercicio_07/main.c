#include <stdio.h> //Funções de I/O, etc.
#include <math.h>  //Fincao pow
/* Funcão: main() */
#define PESSOAS 20
int main(){
  //Declara variaveis
  float peso = 0.0, altura = 0.0, imc = 0.0;
  int cont = 0, qtde = 0;
  while(cont < PESSOAS){
    printf("Digite o peso em kg da %d\246 pessoa: ", (cont+1));
    scanf("%f", &peso);
    printf("Digite a altura em metros da %d\246 pessoa: ", (cont+1));
    scanf("%f", &altura);
    imc = peso / pow(altura, 2); //Calculo do IMC
    //Testa IMC
    if(imc >= 18.5 && imc <= 24.9)
      qtde++;
    cont++;
  }//Fim do while(cont < PESSOAS)
  printf("\nQuantidade de pessoas sem obesidade: %d \n", qtde);
  return 0; //Retorna inteiro
}//Fim da funcao main()

