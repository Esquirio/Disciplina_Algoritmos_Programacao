#include <stdio.h>
#include <stdlib.h>
#define TAM 5
int main() {
  int idades[TAM][2], cont = 0;
  for (int i = 0; i < TAM; i++) {
    printf(
        "Digite as idades do casal separadas por espaco e entao pressione "
        "ENTER: ");
    scanf("%d%d", &idades[i][0], &idades[i][1]);
  }

  for (int i = 0; i < TAM; i++) {
    for (int j = 0; j < 2; j++) {
      if (idades[i][j] >= 18 && idades[i][j] <= 30) {
        printf("Idade: %d\n", idades[i][j]);
        cont++;
      }
    }
  }
  printf("Qtade de idades 18 <= idade <= 30 eh: %d", cont);

  return 0;
}
