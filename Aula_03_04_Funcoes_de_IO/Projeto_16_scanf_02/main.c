#include <stdio.h>

int main()
{
  int num;
  printf("Digite um numero: ");
  scanf("%d", &num);
  printf("Numero digitado: %d\n", num);
  printf("Antecessor: %d\n", num-1);
  printf("Sucessor: %d\n", num+1);
  return 0;
}
