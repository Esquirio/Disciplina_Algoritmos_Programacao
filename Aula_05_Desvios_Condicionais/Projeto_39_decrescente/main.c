#include <stdio.h>  //Funcoes de I/O
/* Funcao main */
int main() {
  // Declaracao de variaveis
  float num01 = 0.0, num02 = 0.0;
  printf("Digite dois numeros reais: "); /* Msg para o usuário */
  scanf("%f%f", &num01, &num02);         /* Ler dois numeros reais */
  // Teste os numeros
  if (num01 < num02)
    printf("Ordem descrecente: %.4f %.4f", num01, num02);
  else
    printf("Ordem descrecente: %.4f %.4f", num02, num01);
  return 0;
}  // Fim da funcao main()
