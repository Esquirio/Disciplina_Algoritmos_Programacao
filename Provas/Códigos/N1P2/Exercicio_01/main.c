#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main() {
  // Apresentacao do grupo
  printf("===INTEGRANTES=DO=GRUPO===\n");
  printf("Prof. Me. Fernando Esquirio Torres\n");
  printf("RA 21222222\n");
  printf("==========================");

  // Constantes
  float g = 9.81, pi = 3.14;

  // Variaveis recebidas
  int opcao_escolhida;
  float v_zero, alpha, distancia, tamanho;

  // Variaveis calculadas
  float v_zero_quad, alpha_rad, altura, tempo_trajeto, alcance;

  do {
    // Mostrar menu e receber opcao
    printf("\n\nMENU PRINCIPAL\n\n");
    printf("1) Simular Disparo\n");
    printf("2) Sair\n\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao_escolhida);

    // Decidir o que fazer para cada item do menu
    switch(opcao_escolhida){
      case 1: // Simular disparo
        printf("\n");
        // Entrada de dados
        do {
          printf("\tDigite a Velocidade Inicial: ");
          scanf("%f", &v_zero);
        } while (v_zero <= 0);
        do {
          printf("\tDigite a Inclinacao (em graus): ");
          scanf("%f", &alpha);
        } while (alpha <= 0 || alpha >= 90);
        do {
          printf("\tDigite a distancia do alvo: ");
          scanf("%f", &distancia);
        } while (distancia <= 0);
        do {
          printf("\tDigite o tamanho do alvo: ");
          scanf("%f", &tamanho);
        } while (tamanho < 20 || tamanho > 50);

        // Calcular valores a partir da entrada de dados
        alpha_rad = alpha * pi/180;
        v_zero_quad = v_zero * v_zero;
        alcance = 2 * v_zero_quad * cos(alpha_rad) * sin(alpha_rad) / g;
        tempo_trajeto = 2 * v_zero * sin(alpha_rad);
        altura = v_zero_quad * sin(alpha_rad) / (2 * g);

        // Saida de dados
        printf("\n\n\tAlcance horizontal: %.2f", alcance);
        printf("\n\tTempo do trajeto: %.2f", tempo_trajeto);
        printf("\n\tAltura maxima: %.2f", altura);

        // Mostrar ao usuario e gravar no vetor se o disparo foi bem sucedido
        if( alcance < distancia ) {
          printf("\n\tO disparo caiu antes do alvo");
        } else if ( alcance < distancia + tamanho){
          printf("\n\tO disparo acertou o alvo!");
        } else {
          printf("\n\tO disparo caiu depois do alvo");
        }
      break;
      case 2: // Sair
        // Apenas mostrar mensagem de adeus
        // O do/while é quem realmente cuida da parte de encerrar
        printf("\nThat's all folks!\n");
      break;
      default: // Invalida
        // Apenas mostrar que esta errado
        printf("\n\tOpcao invalida!");
      break;
    }
  // Repete o menu, saindo apenas quando o usuario digitar 4
  } while (opcao_escolhida != 2);
}
