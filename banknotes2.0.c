#include <stdio.h>
int main(void)
{
  int notas[7], aux, posnota = 0, posnt = 0, nt[7], valor;

  nt[0] = 100;
  nt[1] = 50;
  nt[2] = 20;
  nt[3] = 10;
  nt[4] = 5;
  nt[5] = 2;
  nt[6] = 1;

  scanf("%d", &valor);
  aux = valor;
  for (; posnota <= 6; posnota++)
  {
    notas[posnota] = aux / nt[posnt];
    aux = aux % nt[posnt];
    posnt++;
  }

  posnt = 0;
  printf("%d\n", valor);
  for (posnota = 0; posnota <= 6; posnota++)
  {
    printf("%d nota(s) de R$ %d,00\n", notas[posnota], nt[posnt]);
    posnt++;
  }
  return 0;
}
// QUE PROGRAMA LINDOOOAOAOAAAA
