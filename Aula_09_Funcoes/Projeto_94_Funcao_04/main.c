#include <stdio.h>
#include <stdlib.h>

// Prototiopo da funcao
float Converte_Celsius(float fahr);

// Funcao main()
int main() {
  float celsius = 0, fahrenheit = 0;
  printf("Digite a temperatura em graus Fahrenheit: ");
  scanf("%f", &fahrenheit);
  printf("%f\n", fahrenheit);
  // Chamada da funcao
  celsius = Converte_Celsius(fahrenheit);

  printf("Temperatura em Celsius = %.2f\n", celsius);
  system("PAUSE");
  return 0;
}  // Fim da funcao main()

// Funcao float Converte_Celsius(float fahr)
float Converte_Celsius(float fahr) {
  float c;
  c = (fahr - 32.0) * 5.0 / 9.0;
  return c;
}  // Fim float Converte_Celsius(float fahr)
