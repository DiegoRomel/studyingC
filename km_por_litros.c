#include <stdio.h>
int main(void)
{
  int km;
  double litros;

  scanf("%d %lf", &km, &litros);
  double total = km / litros;
  printf("%.3lf km/l\n", total);
  return 0;
}