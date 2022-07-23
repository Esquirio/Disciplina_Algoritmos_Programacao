#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n = 0;
  printf("Digite o fim da sequencia: ");
  scanf("%d", &n);
  printf("Saida: ");
  for(int i = 1; i <= n; i++){
    if(i%4)
      printf("%d ", i);
    else
      printf("PIN ");
  }
  putchar('\n');
  return 0;
}
