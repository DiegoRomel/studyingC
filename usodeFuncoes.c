#include <stdio.h>
#include <math.h>

int main(void)
{
  float calcularHipotenusa(float a, float b);
  float Coposto, Cadjacente, resultado;

  scanf("%f %f", &Coposto, &Cadjacente);

  resultado = calcularHipotenusa(Coposto, Cadjacente);
  printf("a hipotenusa eh: %f\n", resultado);
  return 0;
}

float calcularHipotenusa(float Coposto, float Cadjacente)
{
  float hipotenusa = pow(pow(Coposto, 2) + pow(Cadjacente, 2), 0.5);
  return hipotenusa;
}