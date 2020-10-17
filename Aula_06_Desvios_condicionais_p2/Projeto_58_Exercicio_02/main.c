#include <stdio.h> //Funcoes de I/O
#include <ctype.h> //Funcao toupper
/* Função main() */
int main(){
  //Declara variaveis
  int num_01 = 0, num_02 = 0, sub = 0, prod = 0;
  float media = 0.0, div = 0.0;

  char escolha = 's'; //Variavel char
  printf("Digite dois valores inteiros: ");
  scanf("%i%i", &num_01, &num_02); //Ler inteiros
  printf("\nEscolha uma das opcoes:\n");
  printf("M - Calcula a media entre os numeros.\n");
  printf("S - Calcula a diferenca entre o maior pelo menor.\n");
  printf("P - Calcula o produto entre os numeros.\n");
  printf("D - Calcula a divisao entre o primeiro pelo segundo numero.\n");
  scanf(" %c", &escolha); //Ler escolha do usuario
  escolha = toupper(escolha); //Converte o caractere para maiúsculo
  switch(escolha){
  case 'M':
    media = (num_01 + num_02)/2.0;
    printf("\nA media entre %d e %d eh: %.2f\n", num_01, num_02, media);
    break;
  case 'S':
    if(num_01 > num_02){
      sub = num_01 - num_02;
      printf("\nA diferenca entre %d e %d eh: %d\n", num_01, num_02, sub);
    }//Fim do if
    else{
      sub = num_02 - num_01;
      printf("\nA diferenca entre %d e %d eh: %d\n", num_02, num_01, sub);
    }//Fim do else
    break;
  case 'P':
    prod = (num_01 * num_02);
    printf("\nO produto entre %d e %d eh: %d\n", num_01, num_02, prod);
    break;
  case 'D':
    div = (float)num_01 / (float)num_02;
    printf("\nA divisão entre %d e %d eh: %.2f\n", num_01, num_02, div);
    break;
  }//Fim do switch
  return 0;
}//Fim da funcao main()
