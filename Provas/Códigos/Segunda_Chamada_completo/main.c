#include <stdio.h>
#include <stdlib.h>

int main() {
  char texto[200], parada = '1';
  int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0,
      k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, s = 0, t = 0,
      u = 0, v = 0, x = 0, w = 0, y = 0, z = 0;
  int cont = 0, tam = 0;
  printf("Escreva seu texto, digite # para parar:\n");
  ;
  gets(texto);
  do {
    parada = fgetc(stdin);

    if (parada == '~') {
      texto[tam] = '\0';
      tam++;
    } else if (parada == 13) {
      putchar('\n');
    } else {
      texto[tam] = parada;
      tam++;
    }
  } while (parada != '#');

  while (texto[cont] != '\0') {
    if (texto[cont] == 'a' || texto[cont] == 'A') a++;
    if (texto[cont] == 'b' || texto[cont] == 'B') b++;
    if (texto[cont] == 'c' || texto[cont] == 'C') c++;
    if (texto[cont] == 'd' || texto[cont] == 'D') d++;
    if (texto[cont] == 'e' || texto[cont] == 'E') e++;
    if (texto[cont] == 'f' || texto[cont] == 'F') f++;
    if (texto[cont] == 'g' || texto[cont] == 'G') g++;
    if (texto[cont] == 'h' || texto[cont] == 'H') h++;
    if (texto[cont] == 'i' || texto[cont] == 'I') i++;
    if (texto[cont] == 'j' || texto[cont] == 'J') j++;
    if (texto[cont] == 'k' || texto[cont] == 'K') k++;
    if (texto[cont] == 'l' || texto[cont] == 'L') l++;
    if (texto[cont] == 'm' || texto[cont] == 'M') m++;
    if (texto[cont] == 'n' || texto[cont] == 'N') n++;
    if (texto[cont] == 'o' || texto[cont] == 'O') o++;
    if (texto[cont] == 'p' || texto[cont] == 'P') p++;
    if (texto[cont] == 'q' || texto[cont] == 'Q') q++;
    if (texto[cont] == 'r' || texto[cont] == 'R') r++;
    if (texto[cont] == 's' || texto[cont] == 'S') s++;
    if (texto[cont] == 't' || texto[cont] == 'T') t++;
    if (texto[cont] == 'u' || texto[cont] == 'U') u++;
    if (texto[cont] == 'v' || texto[cont] == 'V') v++;
    if (texto[cont] == 'x' || texto[cont] == 'X') x++;
    if (texto[cont] == 'w' || texto[cont] == 'W') w++;
    if (texto[cont] == 'y' || texto[cont] == 'Y') y++;
    if (texto[cont] == 'z' || texto[cont] == 'Z') z++;
    cont++;
  }
  printf("Ocorrencias de Letras:\n");
  printf("\"a\": %d \t", a);
  printf("\"b\": %d \t", b);
  printf("\"c\": %d \t", c);
  printf("\"d\": %d \t", d);
  printf("\"e\": %d \t", e);
  printf("\"f\": %d \t", f);
  printf("\"g\": %d \t", g);
  printf("\"h\": %d \t", h);
  printf("\"i\": %d \t", i);
  printf("\"j\": %d \t", j);
  printf("\"k\": %d \t", k);
  printf("\"l\": %d \t", l);
  printf("\"m\": %d \t", m);
  printf("\"n\": %d \t", n);
  printf("\"o\": %d \t", o);
  printf("\"p\": %d \t", p);
  printf("\"q\": %d \t", q);
  printf("\"r\": %d \t", r);
  printf("\"s\": %d \t", s);
  printf("\"t\": %d \t", t);
  printf("\"u\": %d \t", u);
  printf("\"v\": %d \t", v);
  printf("\"w\": %d \t", w);
  printf("\"y\": %d \t", y);
  printf("\"x\": %d \t", x);
  printf("\"z\": %d \t", z);

  return 0;
}
