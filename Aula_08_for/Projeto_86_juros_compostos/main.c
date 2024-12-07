#include <math.h>   //Função pow
#include <stdio.h>  //Funções de I/O
#include <stdlib.h>
/* função main */
int main(void) {
  double valor;              /* valor em depósito (vf) */
  double principal = 1000.0; /* principal inicial (vp) */
  double taxa = .05;         /* taxa anual de juros (t) */
  int ano;                   /* contador do ano (n) */
  /* cabeçalho de coluna da tabela de resultados */
  printf("%4s%21s\n", "Ano", "Valor na conta");
  /* calcula valor em depósito para cada um dos dez anos */
  for (ano = 1; ano <= 10; ano++) {
    /* calcula novo valor para o ano especificado */
    valor = principal * pow(1.0 + taxa, ano);
    /* exibe uma linha da tabela */
    printf("%4d%21.2f\n", ano, valor);
  } /* fim do for */
  return 0; /* Retorna inteiro */
} /* fim da função main */
