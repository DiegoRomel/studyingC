#include <stdio.h>
#include <math.h>
// programa para ler valor e converter em notas e moedas
int main(void)
{
  int notas[6], nt[6], posnota, moedas[6], md[6], aux, aux2, posmoeda;
  float valor, centavos[6];
  nt[0] = 100;
  nt[1] = 50;
  nt[2] = 20;
  nt[3] = 10;
  nt[4] = 5;
  nt[5] = 2;

  md[0] = 100;
  md[1] = 50;
  md[2] = 25;
  md[3] = 10;
  md[4] = 5;
  md[5] = 1;

  scanf("%f", &valor);
  aux = valor;
  aux2 = valor * 100;
  aux2 = aux2 % 100;

  printf("NOTAS:\n");
  for (posnota = 0; posnota <= 5; posnota++)
  {
    notas[posnota] = aux / nt[posnota];
    aux = aux % nt[posnota];
  }

  for (posnota = 0; posnota <= 5; posnota++)
  {
    printf("%d nota(s) de R$ %d.00\n", notas[posnota], nt[posnota]);
  }

  printf("MOEDAS:\n");
  moedas[0] = aux;
  for (posmoeda = 1; posmoeda <= 5; posmoeda++)
  {
    moedas[posmoeda] = aux2 / md[posmoeda];
    aux2 = aux2 % md[posmoeda];
  }

  for (posmoeda = 0; posmoeda <= 5; posmoeda++)
  {
    centavos[posmoeda] = (float)md[posmoeda] / 100.00;
  }
  for (posmoeda = 0; posmoeda <= 5; posmoeda++)
  {
    printf("%d moeda(s) de R$ %.2f\n", moedas[posmoeda], centavos[posmoeda]);
  }
}