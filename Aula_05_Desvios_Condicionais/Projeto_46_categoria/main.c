#include <stdio.h> //Funcoes de I/O
/* Funcao main */
int main()
{
  //Declaracao de variaveis
  int idade = 0;
  printf("Digite a idade da pessoa: "); /* Msg para o usuário */
  scanf("%d", &idade); /* Ler a idade */
  //Testa idade
  if(idade < 5)
    printf("Idade %d anos, categoria Bebe.\n\n", idade);
  else if(idade >= 5 && idade <= 7)
    printf("Idade %d anos, categoria Infantil A.\n\n", idade);
  else if(idade >= 8 && idade <= 10)
    printf("Idade %d anos, categoria Infantil B.\n\n", idade);
  else if(idade >= 11 && idade <= 13)
    printf("Idade %d anos, categoria Juvenil A.\n\n", idade);
  else if(idade >= 14 && idade <= 17)
    printf("Idade %d anos, categoria Juvenil B.\n\n", idade);
  else if(idade >= 18)
    printf("Idade %d anos, categoria Senior.\n\n", idade);
  return 0; //Retorno inteiro
}//Fim da funcao main()

