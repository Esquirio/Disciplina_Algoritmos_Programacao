#include <stdio.h> //Funcoes de I/O
#define ALUNOS 5.0
/* Função main() */
int main()
{
  float nota1 = 0.0, nota2 = 0.0, media = 0.0, media_turma = 0.0;
  int cont = 0;
  while(cont < ALUNOS){
    printf("Digite a nota 1 do %d\370 aluno: ", (cont+1));
    scanf("%f", &nota1);
    printf("Digite a nota 2 do %d\370 aluno: ", (cont+1));
    scanf("%f", &nota2);
    media = (nota1 + nota2)/2.0;
    printf("Media do aluno %d: %.2f \n\n", cont+1, media);
    cont++;
    media_turma += media;
  }//Fim do while(cont < ALUNOS)
  media_turma /= ALUNOS;
  printf("Media da turma foi: %.2f", media_turma);
  return 0; //Retorna inteiro
}//Fim da funcao main()
