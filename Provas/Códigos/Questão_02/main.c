#include <stdio.h>
/*Funcao main()*/
int main()
{
  /* Declara variáveis float */
  float peso = 0.0, altura = 0.0, imc = 0.0;
  printf("Digite seu peso em kg: "); /* Msg para o usuário */
  scanf("%f", &peso); /* Leitura do peso */
  printf("Digite sua altura em metros: "); /* Msg para o usuário */
  scanf("%f", &altura); /* Leitura do altura */

  //Cálculo do IMC
  imc = peso/(altura*altura);

  //Testa IMC
  if(imc < 18.5){
    printf("Abaixo do peso: IMC = %.2f, que eh menor que 18.5\n\n", imc);
  }//Fim do if(imc < 18.5)
  else if(imc >= 18.5 && imc < 25){
    printf("Normal: IMC = %.2f, que esta entre 18.5 e 24.9\n\n", imc);
  }//Fim do else if(imc >= 18.5 && imc <= 24.9)
  else if(imc >= 25 && imc < 30){
    printf("Acima do peso: IMC = %.2f, que esta entre 25 e 29.9\n\n", imc);
  }//Fim do else if(imc >= 18.5 && imc <= 24.9)
  else{
    printf("Obeso: IMC = %.2f, que eh 30 ou mais\n\n", imc);
  }//Fim do else

  printf("Hello world!\n");
  return 0;
}//Fim da funcao main()

