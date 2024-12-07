#include <stdio.h>  //Funções de I/O, etc.
/* Funcão: main() */
int main() {
  int cont = 0;                                   // declara o contador
  float nota = 0.0, media = 0.0, acmNotas = 0.0;  // declara o acumulador
  cont = 0;                                       // inicializa o contador
  acmNotas = 0.0;                                 // inicializa o acumulador
  while (cont < 5) {
    printf("Digite a nota %i: ", (cont + 1));
    scanf("%f", &nota);
    acmNotas = acmNotas + nota;  // acumula a nota lida
    cont = cont + 1;             // incrementa o contador
  }
  media = acmNotas / cont;  // Calcula a média das 5 notas
  printf("A media eh : %.2f \n", media);
  return 0;
}  // Fim da funcao main()
