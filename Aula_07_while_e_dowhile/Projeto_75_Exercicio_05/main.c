#include <stdio.h>  //Fun��es de I/O, etc.
/* Func�o: main() */
int main(){
  int cont = 0, valor = 5;
  printf("****** Tabuada do 5 ******\n");
  while(cont <= 10){
    printf("\t%d x %d = %d \n", valor, cont, valor*cont);
    cont++;
  }//Fim do while(cont <= 10)
  return 0; //Retorna valor inteiro
}//Fim da funcao main()

