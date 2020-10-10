#include <stdio.h> // Funcoes de I/O
/* Funcao main() */
int main()
{
  int num_01, num_02; // Declara variavel int
  printf("Digite um numero: ");
  scanf("%d", &num_01);
  printf("Digite outro numero: ");
  scanf("%d", &num_02);
  // Testa se o valor é igual a 20
  if( num_01 == num_02 ){
    // Acao executada se teste verdadeiro
    printf("Numeros iguais!!! \n\n");
  }// Fim do if( num == 20 )
  else{
    if(num_01 > num_02){
      // Acao executada se teste num_01 > num_02 for true
      printf("O %d eh maior do que %d", num_01, num_02);
    }// Fim if(num_01 > num_02)
    else{
      // Acao executada se teste num_01 > num_02 for false
      printf("O %d eh maior do que %d", num_02, num_01);
    }// Fim else
  }// Fim do else
  return 0;
}// Fim da funcao main()
