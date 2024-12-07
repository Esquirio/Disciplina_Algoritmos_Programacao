#include <stdio.h>  //Funcoes de I/O
/* Função main() */
int main() {
  int cod = 0, qtde = 0;  // Declara varaveis
  printf("Digite o codigo e a qtdade do produto: ");
  scanf("%i%i", &cod, &qtde);  // Ler inteiros
  switch (cod) {
    case 100:
      printf("Cachorro Quente\n");
      printf("Total: R$ %.2f \n", 1.2 * qtde);
      break;
    case 101:
      printf("Bauru Simples\n");
      printf("Total: R$ %.2f \n", 1.3 * qtde);
      break;
    case 102:
      printf("Bauru com ovo\n");
      printf("Total: R$ %.2f \n", 1.5 * qtde);
      break;
    case 103:
      printf("Hamburger\n");
      printf("Total: R$ %.2f \n", 1.2 * qtde);
      break;
    case 104:
      printf("Cheeseburguer\n");
      printf("Total: R$ %.2f \n", 1.3 * qtde);
      break;
    case 105:
      printf("Refrigerante\n");
      printf("Total: R$ %.2f \n", 1.0 * qtde);
      break;
    default:
      printf("Codigo invalido!!!\n");
      break;
  }  // Fim do switch(cod)
  return 0;
}  // Fim da funcao main()
