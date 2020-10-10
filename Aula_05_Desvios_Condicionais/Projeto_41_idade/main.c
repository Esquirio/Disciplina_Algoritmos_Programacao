#include <stdio.h> //Funcoes de I/O
/* Funcao main */
int main()
{
  //Declaracao de variaveis
  int idade = 0;
  printf("Digite a idade da pessoa: "); /* Msg para o usuário */
  scanf("%d", &idade); /* Ler a idade */
  //Testa idade
  if(idade >= 18)
    printf("A pessoa eh maior de idade.\n\n");
  else
    printf("A pessoa eh menor de idade.\n\n");
  return 0; //Retorno inteiro
}//Fim da funcao main()



