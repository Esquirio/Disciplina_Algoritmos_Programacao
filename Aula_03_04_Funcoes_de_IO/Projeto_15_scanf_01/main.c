#include <stdio.h> // Fun��es de I/O
/* Fun��o main() inicia o programa */
int main(){
  // Declara��o de vari�veis
  char aluno[40];
  float nota1, nota2, media;

  // Entrada de dados
  printf("Digite o nome do aluno: ");
  gets(aluno);
  printf("Digite duas notas: \n");
  scanf("%f", &nota1);
  scanf("%f", &nota2);

  // Processamento
  media = (nota1 + nota2) / 2;

  //Imprimir resultados
  printf("%s sua media eh: %.2f\n", aluno, media);
  return 0; // Retorna um inteiro
}// Fim da fun��o main()


