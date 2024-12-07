#include <stdio.h>
#include <stdlib.h>
#define TAM 10
int main() {
  unsigned long int matricula[10], mat01 = 0, mat02 = 0;
  int cont[2] = {0, 0};
  for (int i = 0; i < TAM; i++) {
    printf("Digite uma matricula: ");
    scanf("%lu", &matricula[i]);
  }
  fflush(stdin);
  printf("Digite uma matricula para buscar na vetor: \n");
  scanf("%lu", &mat01);
  fflush(stdin);
  printf("Digite outra matricula para buscar na vetor: \n");
  scanf("%lu", &mat02);
  fflush(stdin);

  for (int i = 0; i < TAM; i++) {
    if (matricula[i] == mat01) {
      printf("Matricula %lu encontrada!", mat01);
      cont[0] = 1;
    }

    if (matricula[i] == mat02) {
      printf("Matricula %lu encontrada!", mat02);
      cont[1] = 1;
    }
  }
  if (!cont[0]) printf("Matriculas %lu nao encontradas!", mat01);
  if (!cont[1]) printf("Matriculas %lu nao encontradas!", mat02);

  return 0;
}
