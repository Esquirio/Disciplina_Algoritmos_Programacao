#include <stdio.h>  //Funcoes de I/O
/* Função main() */
int main() {
  int cod = 0, qtde = 0;  // Variaveis inteiras
  float compra = 0.0;
  char continua = 'a';  // Variavel char
  while (continua != 'n') {
    printf("\nDigite o codigo e a qtdade do produto desejado: ");
    scanf("%i%i", &cod, &qtde);  // Ler inteiros
    switch (cod) {
      case 100:
        printf("Cachorro Quente\n");
        printf("Total: R$ %.2f \n\n", 1.2 * qtde);
        compra += 1.2 * qtde;
        break;
      case 101:
        printf("Bauru Simples\n");
        printf("Total: R$ %.2f \n\n", 1.3 * qtde);
        compra += 1.3 * qtde;
        break;
      case 102:
        printf("Bauru com ovo\n");
        printf("Total: R$ %.2f \n\n", 1.5 * qtde);
        compra += 1.5 * qtde;
        break;
      case 103:
        printf("Hamburger\n");
        printf("Total: R$ %.2f \n\n", 1.2 * qtde);
        compra += 1.2 * qtde;
        break;
      case 104:
        printf("Cheeseburguer\n");
        printf("Total: R$ %.2f \n\n", 1.3 * qtde);
        compra += 1.3 * qtde;
        break;
      case 105:
        printf("Refrigerante\n");
        printf("Total: R$ %.2f \n\n", 1.0 * qtde);
        compra += 1.0 * qtde;
        break;
      default:
        printf("Codigo invalido!!!\n\n");
        break;
    }  // Fim do switch(cod)
    printf("Deseja continuar? s - sim ou n - nao\n");
    scanf(" %c", &continua);
  }  // Fim do while(continuar != 'n')
  printf("\Total da compra: R$ %.2f", compra);
  return 0;
}  // Fim da funcao main()
