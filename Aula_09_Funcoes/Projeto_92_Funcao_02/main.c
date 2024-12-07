#include <stdio.h>
// Prototipo da funcao 
int Quadrado(int num);
/*Função main */
int main() {
  int resultado, num01 = 3;
  resultado = Quadrado(num01);  // Chamada da funcao
  printf("Endereco de num na main: %d \n", &num01);
  system("PAUSE");
  printf("O valor do quadrado de 3 eh: %d", resultado);
  return 0;
}  // Fim da funcao int main()

int Quadrado(int num) {
  int resp;
  printf("Endereco de num na funcao: %d \n", &num);
  system("PAUSE");
  resp = num * num;
  return resp;
}  // Fim da funcao int quadrado()
