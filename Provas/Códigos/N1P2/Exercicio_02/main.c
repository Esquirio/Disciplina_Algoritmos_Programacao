#include <stdio.h>
#include <stdlib.h>

int main() {
  int dia = 0, mes = 0, ano = 0, op = 0, valida = 0, bissexto = 0;
  do {
    printf("Validador de data\n");
    printf("1 - Digitar data\n");
    printf("2 - Sair\n");
    printf("Digite uma opcao: ");
    scanf("%d", &op);
    switch (op) {
      case 1:
        do {
          printf("Digite uma data no formato dd/mm/aaaa:\n");
          scanf("%d%*c%d%*c%d", &dia, &mes, &ano);
          if (ano >= 1900 && ano <= 2020) {
            valida = 1;
            // Testa se o ano é bissexto
            if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
              printf("\nAno bissexto.\n");
              bissexto = 1;
            }  // Fim do if
            else {
              printf("\nAno nao eh bissexto.\n");
              bissexto = 0;
            }  // Fim do else
          } else {
            valida = 0;
          }
          if (mes >= 1 && mes <= 12) {
            valida = 1;
            if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 ||
                mes == 10 || mes == 12) {
              if (dia >= 1 && dia <= 31) {
                valida = 1;
              } else {
                valida = 0;
                printf("\n\Dia invalido!\n\n");
              }
            }
            if (mes == 4 || mes == 6 || mes == 9 || mes == 11) {
              if (dia >= 1 && dia <= 30) {
                valida = 1;
              } else {
                valida = 0;
                printf("\n\Dia invalido!\n\n");
              }
            } else {
              if (bissexto == 1) {
                if (dia >= 1 && dia <= 29) {
                  valida = 1;
                } else {
                  valida = 0;
                  printf("\n\Dia invalido!\n\n");
                }
              } else {
                if (dia >= 1 && dia <= 28) {
                  valida = 1;
                } else {
                  valida = 0;
                  printf("\n\Dia invalido!\n\n");
                }
              }
            }
          } else {
            valida = 0;
            printf("\n\Mes invalido!\n\n");
          }

        } while (valida == 0);

        printf("\n\nData: %d/%d/%d\n\n", dia, mes, ano);
        break;
      case 2:
        printf("\n\nThat`s all folks!!!\n\n");
        return 0;
        break;
      default:
        printf("Erro no sistema!");
        return 0;
        break;
    }
  } while (op != 2);

  return 0;
}
