#include <stdio.h>
int main(void)
{
  int input;
  int cinc;
  scanf("%d", &input);
  double uni = input % 10;
  double dez = input % 100 / 10;
  double cent = input % 1000 / 100;
  double mil = input % 10000 / 1000;
  double dmil = input % 100000 / 10000;
  double cmil = input % 1000000 / 100000;
  double m = input % 10000000 / 1000000;
  double cem_m = m * 10000;
  double cem_cmil = cmil * 1000;
  double cem_dmil = dmil * 100;
  double cem_mil = mil * 10;
  double cem_cent = cent;
  double totCem = cem_m + cem_cmil + cem_dmil + cem_mil + cem_cent;

  printf("%lf", totCem);
  return 0;
  // TODO ESSE CALCULO PRA VER QUANTOS CENTOS TEM, SENDO QUE ERA SO DIVIDIR O VALOR POR CEM EUVORASGARAPELEDOMEUROSTOAAAAA
}